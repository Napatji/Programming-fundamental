#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	printf("Enter number : ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		
		for (int j = 0; j < x; j++)
			{
			if (i == 0 || i == x - 1)
				{
				printf("*");
				}
			else if (i >= 1 && i < x - 1)
			{
				if (j == 0 && i >= 1 && i < x - 1)
				{
					printf("*");
				}
				if (j > 0 && j < x - 1 && i >= 1 && i < x - 1)
				{
					printf(" ");
				}
				if (j == x - 1 && i >= 1 && i < x - 1)
				{
					printf("*");
				}
			}
			}
		printf("\n");
	}
	return 0;
}