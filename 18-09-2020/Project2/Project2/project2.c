#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int F,C;
	printf("Enter the temperature value in Fahrenheit = ");
	scanf("%d", &F);
	if (F < 32)
	{
		printf("Too cold to live");
	}
	if (F >= 32)
	{
		C = (5 * (F - 32)) / 9;
		printf("The temperature is %d Degrees Celsius\n", C);
		if (C >= 0 && C<20)
		{
			printf("Human can live but still cold");
		}
		if (C >= 20 && C <= 40)
		{
			printf("Human can live");
		}
		if (C > 40 )
		{
			printf("Too hot to live");
		}

	}
	return 0;
}