#pragma once
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Command
{
public:
	Command();
	~Command();
	int commandReader(string input);
};

