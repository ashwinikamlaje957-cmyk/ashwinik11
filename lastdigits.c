#include<stdio.h>
int main()
{
	int number;
	int lastTwoDigits;
	printf("Enter an interger:");
	scanf("%d",&number);
	lastTwoDigits=number%100;
	printf("The last two digits are:%d\n",lastTwoDigits);
	return 0;
}