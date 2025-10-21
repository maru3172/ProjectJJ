#pragma once

class RefCountable
{
protected:
	std::atomic<int32> _refCount;
public:
	RefCountable() : _refCount(1) { }
	virtual ~RefCountable() { }

	int32 GetRefCount() { return _refCount; }
	int32 AddRef() { return ++_refCount; }
	int32 ReleaseRef()
	{
		int32 refCount = --_refCount;
		if (refCount == 0)
			delete this;
		return refCount;
	}
};

template<typename T>
class TSharedPtr
{
	T* _ptr = nullptr;

	inline void Set(T* ptr)
	{
		_ptr = ptr;
		if (ptr)
			ptr->AddRef();
	}

	inline void Release()
	{
		if (_ptr != nullptr)
		{
			_ptr->ReleaseRef();
			_ptr = nullptr;
		}
	}
public:
	TSharedPtr() { }
	TSharedPtr(T* ptr) { Set(ptr); }
	
	// �������
	TSharedPtr(const TSharedPtr& rhs) { Set(rhs._ptr); }
	// �̵�����
	TSharedPtr(TSharedPtr&& rhs) noexcept { _ptr = rhs._ptr; rhs._ptr = nullptr; }
	// ��� ���� ���� ����
	template<typename U>
	TSharedPtr(const TSharedPtr<U>& rhs) { Set(static_cast<T*>(rhs._ptr)); }

	~TSharedPtr() { Release(); }

	// ������Կ�����
	TSharedPtr& operator=(const TSharedPtr& rhs)
	{
		if (_ptr != rhs._ptr)
		{
			Release();
			Set(rhs._ptr);
		}
		return *this;
	}

	// �̵����Կ�����
	TSharedPtr& operator=(TSharedPtr&& rhs) noexcept
	{
		Release();
		_ptr = rhs._ptr;
		rhs._ptr = nullptr;
		return *this;
	}

	// ������ �����ε� - ������?
	bool operator==(const TSharedPtr& rhs) const { return _ptr == rhs._ptr; }
	bool operator==(T* ptr) const { return _ptr == ptr; }
	// ������ �����ε� - �޶�?
	bool operator!=(const TSharedPtr& rhs) const { return _ptr != rhs._ptr; }
	bool operator!=(T* ptr) const { return _ptr != ptr; }
	// ������ �����ε� - ���� �ּҰ� ������ �ּҺ��� �۾�?
	bool operator<(const TSharedPtr& rhs) const { return _ptr < rhs._ptr; }
	// ���� sharedptr�� ���� ��¥ �����Ϳ��ٰ� �־���� �� ��, ����Ʈ �����Ͷ� ����� ����
	// �����Ͱ� �����̰� �����ϴ� ��üó�� ����
	T* operator*() { return _ptr; }
	const T* operator*() const { return _ptr; }
	operator T* () const { return _ptr; }
	T* operator->() { return _ptr; }
	const T* operator->() const { return _ptr; }

	bool InNull() { return _ptr == nullptr; }
};