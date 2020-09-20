#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score;
	printf("Enter your score : ");
	scanf("%d", &score);
	if (score == 0)
	{
		printf("You have to retest");
	}
	if (score > 0)
	{
		printf("Your grade is ");
		if (score >= 80)
		{
			printf("A");
		}
		if (score >= 70 && score < 80)
		{
			printf("B");
		}
		if (score >= 60 && score < 70)
		{
			printf("C");
		}
		if (score >= 50 && score < 60)
		{
			printf("D");
		}
		if (score < 50)
		{
			printf("F");
		}
	}

	return 0;
}