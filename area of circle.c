#include<stdio.h>
int main()
{
	int radius;
	float area;
	printf("Enter radius of circle:");
	scanf("%d",&radius);
	area=3.14*radius*radius;
	printf("area of circle is:%f",area);
}