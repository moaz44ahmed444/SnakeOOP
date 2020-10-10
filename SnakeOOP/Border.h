#pragma once
#include<iostream>
#include <Windows.h>
using namespace std;
class Border
{
private :
	COORD border_size;
public:
	Border();
	Border(int x, int y);
	Border(COORD z);
	void draw_Border();


};

