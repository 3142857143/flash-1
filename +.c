/*This program gives almost all arithmetic operator*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a, b;
    float c;
    char d;
    printf("Enter the operator: ");
    scanf("%c", &d);
    printf("Ente the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    if(d == '+')
    {
    	c = a + b;
        printf("%f", c);
    }
    if(d == '-')
    {
    	c = a - b;
    	printf("%f", c);
	}
	else if(d == '*')
	{
		c = a*b;
		printf("%f", c);
	}
	else if(d == '/')
	{
		c = a/b;
		printf("%f", c);
	 }
	else if(d == '%')
	{
		printf("%d", a%b);
	}
	else 
	{
		printf("Invalid Input");
	}

}
