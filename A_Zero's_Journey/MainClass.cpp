#include "MainClass.h"
#include "Room.h"
#include "Command.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


MainClass::MainClass()
{
}


MainClass::~MainClass()
{
}

Room gridmap;
MainClass mainClass;
int initialize(int coords);

int main()
{
	int coords;
	coords = initialize(11);
	while (true)
	{
		coords = initialize(coords);
	}
}

int initialize(int coords)
{
	switch (coords)
	{
	case(11):
	{
		return gridmap.room1_1();
	}
	case(12):
	{
		return gridmap.room1_2();
	}
	case(13):
	{
		return gridmap.room1_3();
	}
	case(14):
	{
		return gridmap.room1_4();
	}
	case(15):
	{
		return gridmap.room1_5();
	}
	case(21):
	{
		return gridmap.room2_1();
	}
	case(22):
	{
		return gridmap.room2_2();
	}
	case(23):
	{
		return gridmap.room2_3();
	}
	case(24):
	{
		return gridmap.room2_4();
	}
	case(25):
	{
		return gridmap.room2_5();
	}
	case(31):
	{
		return gridmap.room3_1();
	}
	case(32):
	{
		return gridmap.room3_2();
	}
	case(33):
	{
		return gridmap.room3_3();
	}
	case(34):
	{
		return gridmap.room3_4();
	}
	case(35):
	{
		return gridmap.room3_5();
	}
	case(41):
	{
		return gridmap.room4_1();
	}
	case(42):
	{
		return gridmap.room4_2();
	}
	case(43):
	{
		return gridmap.room4_3();
	}
	case(44):
	{
		return gridmap.room4_4();
	}
	case(45):
	{
		return gridmap.room4_5();
		break;
	}
	case(51):
	{
		return gridmap.room5_1();
	}
	case(52):
	{
		return gridmap.room5_2();
	}
	case(53):
	{
		return gridmap.room5_3();
	}
	case(54):
	{
		return gridmap.room5_4();
	}
	case(55):
	{
		return gridmap.room5_5();
	}
	default:
	{
		cout << "Error in Coords";
	}
	}
}