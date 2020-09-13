#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input, b = 2;
	int sum = 0;
	printf("Enter number : ");
	scanf("%d", &input);
	for (; input != 1; b++)
	{
		for (; input % b == 0;)
		{
			printf("%d\n", b);
			sum += b;
			if (input == 1)
			{
				break;
			}
			input = input / b;
		}
	}
	printf("Sum of all factor is %d", sum);
	return 0;
}
