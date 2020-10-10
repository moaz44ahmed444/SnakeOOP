#include "Snake.h"
#include "Screen.h"

void Snake::print_snake()
{
	for (int i = 0; i < snakeLength; i++)

	{
		Screen::move_cursor(snake[i].X, snake[i].Y);
		if (i == 0) {
			//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

			cout << "@";
			continue;

		}
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "*";
	}
}

void Snake::snake_next_move()
{
	for (int i = 0; i < snakeLength; i++) {
		//moveCursor(snake[i].X, snake[i].Y);
		cout << " ";
	}
	COORD prev_point, temp;
	prev_point = snake[0];
	switch (dir)
	{

	case UP:
		snake[0] = { snake[0].X , snake[0].Y + 1 };
		break;
	case DOWN:
		snake[0] = { snake[0].X , snake[0].Y - 1 };
		break;
	case LEFT:
		snake[0] = { snake[0].X - 1 , snake[0].Y };
		break;
	case RIGHT:
		snake[0] = { snake[0].X + 1 , snake[0].Y };
		break;
	}

	for (int i = 1; i < snakeLength; i++) {
		temp = snake[i];
		snake[i] = prev_point;
		prev_point = temp;
	}
}

bool Snake::check_self_collesion()
{
	for (int i = 1; i < snakeLength; i++) {
		if (snake[0].X == snake[i].X && snake[0].Y == snake[i].Y) {
			return true;
			
		}

	}
}

void Snake::set_speed(int new_speed)
{
	speed = new_speed;
}

void Snake::set_dir(DIRECTION new_direction)
{
	dir = new_direction;
}
