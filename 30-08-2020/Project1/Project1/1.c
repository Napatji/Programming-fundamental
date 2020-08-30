#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number, sum;
	sum = 0;
	printf("Enter number : ");
	scanf("%d",&number);
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	printf("Answer is %d", sum);
	return 0;
}