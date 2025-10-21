#pragma once

class Object : public std::enable_shared_from_this<Object>
{
protected:
	bool _isPlayer = false;
public:
	Protocol::ObjectInfo* objectInfo;
	Protocol::PosInfo* posInfo;
	std::atomic< std::weak_ptr<Room>> room;

	Object();
	virtual ~Object();

	bool IsPlayer() { return _isPlayer; }
};
