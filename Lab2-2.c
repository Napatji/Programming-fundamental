#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);
	int i, j, answer;
	answer = 1;
	for (i = 2; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			for (; num1 % i == 0 && num2 % i == 0;)
			{
				num1 /= i;
				num2 /= i;
				answer *= i;
			}
		}
	}
	printf("Greatest common divisor = %d", answer);
	return 0;
}