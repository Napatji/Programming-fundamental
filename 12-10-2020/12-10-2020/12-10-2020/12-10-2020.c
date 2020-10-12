#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int area, width, length;
	printf("Width is = ");
	scanf("%d", &width);
	printf("Length is = ");
	scanf("%d", &length);
	area = width * length;
	printf("Area of your rectangle is %d\n", area);
	if (width > 0 && length > 0)
	{
		int i = 0;
		for (; (i * i) <= area; i++)
		{
			printf("square length that possible is %d\n", i);
		}
	}
	else
	{
		printf("Please enter positive number");
	}
	

	return 0;
}