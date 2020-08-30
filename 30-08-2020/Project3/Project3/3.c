#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float v,s,t;
	
	printf("Enter your distance : ");
	scanf("%f", &s);
	printf("Enter your time : ");
	scanf("%f", &t);
	v = s / t;
	printf("V is equal %f", v);
	return 0;
}