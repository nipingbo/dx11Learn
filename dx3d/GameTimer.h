#pragma once
#include <chrono>
class GameTimer
{
public:
	GameTimer();
	float Mark();
	float Peek() const;
private:
	std::chrono::steady_clock::time_point last;
};

