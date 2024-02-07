#include<Windows.h>
#include<iostream>
int main()
{
	POINT cursorPos;
	while (true)
	{
		GetCursorPos(&cursorPos);
		std::cout << cursorPos.x << "   " << cursorPos.y << std::endl;
	}
}