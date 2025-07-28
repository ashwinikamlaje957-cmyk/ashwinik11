#include<stdio.h>
int main()
{
	float num1,num2,num3,num4,num5;
	float average;
	printf("Enter the first number:");
	scanf("%f",&num1);
	printf("Enter the second number:");
	scanf("%f",&num2);
	printf("Enter the third number:");
	scanf("%f",&num3);
	printf("Enter the fourth number:");
	scanf("%f",&num4);
	printf("Enter the fifth number:");
	scanf("%f",&num5);
	average=(num1+num2+num3+num4+num5)/5.0;
	printf("The average of the five number is:2f\n",average);
	return 0;
	
	}