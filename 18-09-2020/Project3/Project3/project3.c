#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number;
	printf("Enter your number : ");
	scanf("%d", &number);
	if (number == 0)
	{
		printf("Your number is zero");
	}
	if (number > 0)
	{
		if (number % 2 == 0)
		{
			printf("Your number is Positive Even");
		}
		if (number % 2 != 0)
		{
			printf("Your number is Positive Odd");
		}	
	}
	if (number < 0)
	{
		if (number % 2 == 0)
		{
			printf("Your number is Negative Even");
		}
		if (number % 2 != 0)
		{
			printf("Your number is Negative Odd");
		}
	}
	return 0;
}