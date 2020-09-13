#include<stdio.h>
#include<windows.h>
#include<conio.h>


void draw_ship(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition
	(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf(" <-0-> ");
}

void erase_ship(int x, int y)
{
	system("cls");
}

int main()
{
	char ch = ' ';
	int x = 40, y = 10;
	draw_ship(x, y);
	do {
		if (_kbhit()) {
			ch = _getch();
			if (x == 80 && 1 < y < 20)//right
			{
				if (ch == 'a') { draw_ship(--x, y); }
				if (ch == 'w') { draw_ship(x, --y); }
				if (ch == 's') { draw_ship(x, ++y); }
				erase_ship(x, y);
				draw_ship(x, y);
				fflush(stdin);
			}
			if (x == 1 && 1 < y < 20)//left
			{
				if (ch == 'd') { draw_ship(++x, y); }
				if (ch == 'w') { draw_ship(x, --y); }
				if (ch == 's') { draw_ship(x, ++y); }
				erase_ship(x, y);
				draw_ship(x, y);
				fflush(stdin);
			}
			if (y == 20 && 1 < x < 80)//bottom
			{
				if (ch == 'a') { draw_ship(--x, y); }
				if (ch == 'd') { draw_ship(++x, y); }
				if (ch == 'w') { draw_ship(x, --y); }
				erase_ship(x, y);
				draw_ship(x, y);
				fflush(stdin);
			}
			if (y == 1 && 1 < x < 80)//top
			{
				if (ch == 'a') { draw_ship(--x, y); }
				if (ch == 'd') { draw_ship(++x, y); }
				if (ch == 'w') { draw_ship(x, --y); }
				erase_ship(x, y);
				draw_ship(x, y);
				fflush(stdin);
			}
			if (1 < x < 80 && 1 < y < 20)//center
			{
				if (ch == 'a') { draw_ship(--x, y); }
				if (ch == 'd') { draw_ship(++x, y); }
				if (ch == 'w') { draw_ship(x, --y); }
				if (ch == 's') { draw_ship(x, ++y); }
				erase_ship(x, y);
				draw_ship(x, y);
				fflush(stdin);
			}
		}
		Sleep(100);
	} while (ch != 'x');
	return 0;
}