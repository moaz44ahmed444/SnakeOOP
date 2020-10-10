#include "Border.h"
#include "Screen.h"


Border::Border()
{
	border_size.X = 90;
	border_size.Y = 30;
}

Border::Border(int x, int y)
{
	border_size.X = x;
	border_size.Y = y;
}

Border::Border(COORD z)
{
	
		border_size.X =z.X;
		border_size.Y = z.Y;
	
}

void Border::draw_Border()
{
	//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

		//upper border
	for (int i = 0; i < border_size.X; i++) {
		cout << "-";
	}

	//left & right border
	for (int i = 1; i < border_size.Y; i++) {
		Screen::move_cursor(0, i);
		cout << "|";

		Screen::move_cursor(border_size.X - 1, i);
		cout << "|";
	}

	//down border
	Screen::move_cursor(0, border_size.Y - 1);
	for (int i = 0; i < border_size.X; i++) {
		cout << "-";
	}


}