#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows(n):)");
	scanf("%d",&n);
	for(inti=1;i<=n;i++)
	{
		for(int j=1;j=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}