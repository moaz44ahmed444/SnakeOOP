#include "Screen.h"

void Screen::get_screen_size()
{
	 
	 HANDLE screen_handler = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	screen_size.X = csbi.srWindow.Right - csbi.srWindow.Left - 20;
	screen_size.Y = csbi.srWindow.Bottom - csbi.srWindow.Top - 5;
}

void Screen::hide_cursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

void Screen::move_cursor(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Screen::clear_scren()
{
	system("cls");
}

void Screen::color_border()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

}
