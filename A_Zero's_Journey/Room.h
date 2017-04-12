#pragma once
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Room
{
public:
	Room();
	~Room();
	int room1_1();
	int room1_2();
	int room1_3();
	int room1_4();
	int room1_5();
	int room2_1();
	int room2_2();
	int room2_3();
	int room2_4();
	int room2_5();
	int room3_1();
	int room3_2();
	int room3_3();
	int room3_4();
	int room3_5();
	int room4_1();
	int room4_2();
	int room4_3();
	int room4_4();
	int room4_5();
	int room5_1();
	int room5_2();
	int room5_3();
	int room5_4();
	int room5_5();

};

class RoomState
{
public:
	RoomState();
	~RoomState();
	int getState();
	void setState(int change);

private:
	int state = 1;
};
