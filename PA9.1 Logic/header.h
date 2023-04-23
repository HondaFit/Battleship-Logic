#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <iostream>
#define SPACE 10
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <chrono>
#include <algorithm>
#include <iomanip>


using std::cout; // we can now use cout without explicitly writing std::cout
using std::cin;
using std::endl;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::string;
using std::toupper;
using std::getline;
using std::vector;
using std::put_time;
using std::localtime;

using std::stoi;


enum player
{
	PLAYER1,
	PLAYER2
};

enum state
{
	NSUNK,
	SUNK
};

enum choice
{
	NO,
	YES
};

enum printType
{
	BOARDPLAYER1,
	BOARDVIEWPLAYER1,
	BOARDPLAYER2,
	BOARDVIEWPLAYER2
};