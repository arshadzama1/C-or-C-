// CALCULATOR but not GUI!.
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	int i,a,b;
	printf("Arithimetic operation only!\n");
	printf("Enter 1 to apply a+b\n");
	printf("Enter 2 to apply a-b\n");
	printf("Enter 3 to apply a*b\n");
	printf("Enter 4 to apply a/b\n");
	printf("Enter the two integers :");
	scanf_s("%d%d", &a, &b);
	printf("Enter any number from 1 to 4 :");
	scanf_s("%d", &i);
	switch (i)
	{
	case 1:
		printf("Sum of %d and %d is %d!\n", a, b, a + b);
		break;
	case 2:
		printf("Difference of %d and %d is %d!\n", a, b, a - b);
		break;
	case 3:
		printf("multiplication of %d and %d is %d!\n", a, b, a * b);
		break;
	case 4:
		printf("Division of %d and %d is %d!\n", a, b, a / b);
		break;
	default:
		printf("Invalid input!\n");
		printf("That's why bye bye!\n");
		printf("Try next time!\n");
		break;
	}
	return 0;
    
}
