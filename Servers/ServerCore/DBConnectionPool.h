#pragma once
#include "DBConnection.h"

class DBConnectionPool
{
	USE_LOCK;
	SQLHENV _environment = SQL_NULL_HANDLE;
	Vector<DBConnection*> _connections;
public:
	DBConnectionPool();
	~DBConnectionPool();

	bool Connect(int32 connectionCount, const WCHAR* connectionString);
	void Clear();

	DBConnection* Pop();
	void Push(DBConnection* connection);

};
