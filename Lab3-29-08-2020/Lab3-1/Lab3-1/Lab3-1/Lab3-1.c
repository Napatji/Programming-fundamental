#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char input[100];
    int sum = 0;
    int i;
    printf(" Enter number (100 MAX): ");
    scanf("%s", &input);

    
    for (i = 0; i < 100; i++) 
    {
        if (input[i] == '\0')
        {
            break;
        }
        sum += input[i] - '0';
    }   
    printf("%d\n", sum);

    
	return 0;
}