#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int number, line, star1, star2, space;
	scanf("%d", &number);
	for (line = 1; line < (2 * number); line++)
	{
		if (line == number)
		{
			for (int star = 0; star < (2 * number) - 1; star++)
			{
				printf("*");
			}
		}
		if (line < number)
		{
			for (star1 = 0; star1 < line ; star1++)
			{
				printf("*");
			}
			for (space = 0; space < (2*(number-line))-1; space++ )
			{
				printf(" ");
			}
			for (star1 = 0; star1 < line; star1++)
			{
				printf("*");
			}
			
		}
		if (line > number)
		{
			
			for (star2 = 2*number; star2 > line; star2--)
			{
				printf("*");
			}
			for (space = 0; space < (2 * (line - number)) - 1; space++)
			{
				printf(" ");
			}
			for (star2 = 2 * number; star2 > line; star2--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}