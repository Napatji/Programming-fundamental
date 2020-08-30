#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i, number;
	printf("Enter your number : ");
	scanf("%d", &number);
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			printf("This number is not a prime number\n");
			break;
		}
		printf("This is a prime number");
		break;
		
	}

	return 0;
}