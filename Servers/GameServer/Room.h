#pragma once
#include "JobQueue.h"

class Room : public JobQueue
{
	bool AddObject(ObjectRef object);
	bool RemoveObject(uint64 objectId);

	void Broadcast(SendBufferRef sendBuffer, uint64 exceptId = 0);

	std::unordered_map<uint64, ObjectRef> _objects;
public:
	Room();
	virtual ~Room();

	bool EnterRoom(ObjectRef object, bool randPos = true);
	bool LeaveRoom(ObjectRef object);

	bool HandleEnterPlayer(PlayerRef player);
	bool HandleLeavePlayer(PlayerRef player);
	void HandleMove(Protocol::C_MOVE pkt);

	void UpdateTick();

	RoomRef GetRoomRef();
};

extern RoomRef GRoom;