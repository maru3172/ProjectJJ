#pragma once
#include "Session.h"

class Player;

class GameSession : public PacketSession
{
public:
	~GameSession()
	{
		std::cout << "~GameSession" << std::endl;
	}

	virtual void OnConnected() override;
	virtual void OnDisconnected() override;
	virtual void OnRecvPacket(BYTE* buffer, int32 len) override;
	virtual void OnSend(int32 len) override;

	std::atomic<std::shared_ptr<Player>> player;
};