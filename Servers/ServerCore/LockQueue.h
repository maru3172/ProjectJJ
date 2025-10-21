#pragma once

template<typename T>
class LockQueue
{
	USE_LOCK;
	Queue<T> _items;
public:
	void Push(T item)
	{
		WRITE_LOCK;
		_items.push(item);
	}

	T Pop()
	{
		WRITE_LOCK;
		return PopNoLock();
	}

	T PopNoLock()
	{
		if (_items.empty())
			return T();

		T ret = _items.front();
		_items.pop();
		return ret;
	}

	void PopAll(OUT Vector<T>& items)
	{
		WRITE_LOCK;
		while (T item = PopNoLock())
			items.push_back(item);
	}

	void Clear()
	{
		WRITE_LOCK;
		_items = Queue<T>();
	}
};
