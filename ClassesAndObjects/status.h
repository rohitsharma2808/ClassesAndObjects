#pragma once
enum status
{
	Pending,
	Approved,
	Cancelled
};

enum class Filerror
{
	notfound,
	ok
};

enum class NetworkError
{
	disconnected,
	ok
};