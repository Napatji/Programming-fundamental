#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number;
	int i;
	int sum = 0;
	
	for (number = 2;number <= 10000;number++)
	{
		for (i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				sum += i;
			}
		}
		if (number == sum)
		{
			printf("P(%d) = %d\n", number, sum);
		}
		sum *= 0;
	}
	return 0;
}