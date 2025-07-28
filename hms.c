#include<stdio.h>
int main()
{
	int hours,minutes,second;
	printf("Enter the number of hour:");
	scanf("%d",&hours);
	minutes=hours*60;
	second=hours*3600;
	printf("%d hours is equal to:\n",hours);
	printf("%11d minutes\n",minutes);
	printf("%11d second\n",second);
	return 0;
}