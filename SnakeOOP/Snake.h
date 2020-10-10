#pragma once

#include <windows.h>
#include "Direction.h"
#include <iostream>
using namespace std;

class Snake
{
private:
	int snakeLength, speed;
	COORD snake[1000];
	DIRECTION dir;

public:
	void print_snake();
	void snake_next_move();
	bool check_self_collesion();
	void set_speed(int new_speed);
	void set_dir(DIRECTION new_direction);



};

