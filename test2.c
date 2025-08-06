#include<stdio.h>
int main()
{
	int number;
	printf("Enter the integer:");
	scanf("%d",&number);
	if(number>0)
	{
		printf("%d ia a positive number.\n",number);
	}
	else
	if(number<0)
	{
		printf("%d ia a negative number.\n",number);
	}
	else
	{
		printf("the number is zero");
			}
	return 0;
		
	
}