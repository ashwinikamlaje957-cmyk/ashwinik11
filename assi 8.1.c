#include<stdio.h>
void main()
{
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Display the array\n");
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	int max=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("maximum number:%d\n",max);
	int min=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("minimum number is :%d",min);
}