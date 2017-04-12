#include "Room.h"
#include "Command.h"
#include "MainClass.h"

Command cmd;
RoomState R1_1;
RoomState R1_2;
RoomState R1_3;
RoomState R1_4;
RoomState R1_5;
RoomState R2_1;
RoomState R2_2;
RoomState R2_3;
RoomState R2_4;
RoomState R2_5;
RoomState R3_1;
RoomState R3_2;
RoomState R3_3;
RoomState R3_4;
RoomState R3_5;
RoomState R4_1;
RoomState R4_2;
RoomState R4_3;
RoomState R4_4;
RoomState R4_5;
RoomState R5_1;
RoomState R5_2;
RoomState R5_3;
RoomState R5_4;
RoomState R5_5;

string input;

Room::Room()
{
}


Room::~Room()
{
}

RoomState::RoomState()
{
}

RoomState::~RoomState()
{
}

int RoomState::getState()
{
	return state;
}

void RoomState::setState(int change)
{
	state = change;
}

int Room::room1_1()
{
	switch (R1_1.getState())
	{
	case (1):
	{
		cout << "This is room 1_1\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "Can't move that way.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 11;
}

int Room::room1_2()
{
	switch (R1_2.getState())
	{
	case (1):
	{
		cout << "This is room 1_2\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 13;
		break;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		return 11;
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 12;
}

int Room::room1_3()
{
	switch (R1_3.getState())
	{
	case (1):
	{
		cout << "This is room 1_3\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 14;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		return 12;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 13;
}

int Room::room1_4()
{
	switch (R1_4.getState())
	{
	case (1):
	{
		cout << "This is room 1_4\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 15;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		return 13;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 14;
}

int Room::room1_5()
{
	switch (R1_5.getState()) //States, changes intro text.
	{
	case (1):
	{
		cout << "This is room 1_5\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "Can't move that way.\n";
		break;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		return 14;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 15;
}

int Room::room2_1()
{
	switch (R2_1.getState())
	{
	case (1):
	{
		cout << "This is room 2_1\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 21;
}

int Room::room2_2()
{
	switch (R2_2.getState())
	{
	case (1):
	{
		cout << "This is room 2_2\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 22;
}

int Room::room2_3()
{
	switch (R2_3.getState())
	{
	case (1):
	{
		cout << "This is room 2_3\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 23;
}

int Room::room2_4()
{
	switch (R2_4.getState())
	{
	case (1):
	{
		cout << "This is room 2_4\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 24;
}

int Room::room2_5()
{
	switch (R2_5.getState())
	{
	case (1):
	{
		cout << "This is room 2_5\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 25;
}

int Room::room3_1()
{
	switch (R3_1.getState())
	{
	case (1):
	{
		cout << "This is room 3_1\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 31;
}

int Room::room3_2()
{
	switch (R3_2.getState())
	{
	case (1):
	{
		cout << "This is room 3_2\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 32;
}


int Room::room3_3()
{
	switch (R3_3.getState())
	{
	case (1):
	{
		cout << "This is room 3_3\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 33;
}


int Room::room3_4()
{
	switch (R3_4.getState())
	{
	case (1):
	{
		cout << "This is room 3_4\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 34;
}


int Room::room3_5()
{
	switch (R3_5.getState())
	{
	case (1):
	{
		cout << "This is room 3_5\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 35;
}


int Room::room4_1()
{
	switch (R4_1.getState())
	{
	case (1):
	{
		cout << "This is room 4_1\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 41;
}


int Room::room4_2()
{
	switch (R4_2.getState())
	{
	case (1):
	{
		cout << "This is room 4_2\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 42;
}

int Room::room4_3()
{
	switch (R4_3.getState())
	{
	case (1):
	{
		cout << "This is room 4_3\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 43;
}

int Room::room4_4()
{
	switch (R4_4.getState())
	{
	case (1):
	{
		cout << "This is room 4_4\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 44;
}

int Room::room4_5()
{
	switch (R4_5.getState())
	{
	case (1):
	{
		cout << "This is room 4_5\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 45;
}

int Room::room5_1()
{
	switch (R5_1.getState())
	{
	case (1):
	{
		cout << "This is room 5_1\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 51;
}

int Room::room5_2()
{
	switch (R5_2.getState())
	{
	case (1):
	{
		cout << "This is room 5_2\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 52;
}

int Room::room5_3()
{
	switch (R5_3.getState())
	{
	case (1):
	{
		cout << "This is room 5_3\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 53;
}

int Room::room5_4()
{
	switch (R5_4.getState())
	{
	case (1):
	{
		cout << "This is room 5_4\n";
		break;
	}
	default:
		cout << "State Error\n";
	}getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 54;
}

int Room::room5_5()
{
	switch (R5_5.getState())
	{
	case (1):
	{
		cout << "This is room 5_5\n";
		break;
	}
	default:
		cout << "State Error\n";
	}
	getline(cin, input);
	switch (cmd.commandReader(input))
	{
	case(1): // move north
	{
		cout << "You are moving north.\n";
		break;
	}
	case(2): //move east
	{
		cout << "You are moving east.\n";
		return 12;
	}
	case(3): //move west
	{
		cout << "You are moving west.\n";
		break;
	}
	case(4): //move south
	{
		cout << "You are moving south.\n";
		break;
	}
	case(5): //look
	{

	}
	case(6): //examine
	{

	}
	case(7): //take
	{

	}
	case(8): //use
	{

	}
	default:
	{
		cout << "I do not recognize that command.\n";
		break;
	}
	}
	return 55;
}
