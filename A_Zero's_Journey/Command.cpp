#include "Command.h"
#include "Room.h"


Command::Command()
{
}


Command::~Command()
{
}

int Command::commandReader(string input)
{
	transform(input.begin(), input.end(), input.begin(), ::tolower);
	if (input.find("move") == 0)
	{
		input.erase (0,5);
	}
	if (input.size() < 7 && input.find("north") || input.find("east") || input.find("south") || input.find("west") || input.at(0) == 'n' || input.at(0) == 'w' || input.at(0) == 's' || input.at(0) == 'e')
	{
		if (input.find("north")==0 || input.at(0)=='n' && input.size() == 1)
		{
			return 1;
		}
		else if (input.find("east")==0 || input.at(0)=='e' && input.size() == 1)
		{
			return 2;
		}
		if (input.find("west")==0 || input.at(0)=='w' && input.size() == 1)
		{
			return 3;
		}
		if (input.find("south")==0 || input.at(0)=='s' && input.size() == 1)
		{
			return 4;
		}
		return 99;
	}
	if (input.find("look") == 0)
	{
		return 5;
	}
	if (input.find("examine") == 0)
	{
		return 6;
	}
	if (input.find("pick up") == 0 || input.find("take") == 0 || input.find("grab") == 0)
	{
		return 7;
	}
	if (input.find("use") == 0)
	{
		return 8;
	}
	if (input.find("hint") == 0)
	{
		return 9;
	}
	else
	{
		return 99;
	}
}
