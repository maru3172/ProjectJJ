#pragma once

class ObjectUtils
{
	static std::atomic<int64> s_idGenerator;
public:
	static PlayerRef CreatePlayer(GameSessionRef session);
};

