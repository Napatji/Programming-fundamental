#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input1, input2;
	int x;
	printf("Enter first number : ");
	scanf("%d", &input1);
	printf("Enter second number : ");
	scanf("%d", &input2);
	printf("Your interval is [%d,%d]\n", input1, input2);
	for (x = input1 ; x >= input1 && x <= input2; x++)
	{
		printf("%d\n", x);
	}
	
	return 0;
}