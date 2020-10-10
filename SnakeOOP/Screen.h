#include <Windows.h>

class Screen
{
private:
	COORD screen_size;
public:

	void get_screen_size();
	void hide_cursor();
	static void move_cursor(int x, int y);
	void clear_scren();
	void color_border();
};

