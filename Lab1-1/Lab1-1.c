#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b = 2;
	printf("Enter number : ");
	scanf("%d", &a);
	printf("Factoring Result : ");
	for (; a != 1; b++)
	{
		for (; a % b == 0;)
		{
			printf("%d", b);
			printf(" x ");
			a = a / b;
		}
	}
	return 0;
}
