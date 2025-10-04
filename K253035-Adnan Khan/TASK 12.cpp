#include<stdio.h>
int main(){
	int num=0;
	printf("Enter any number:");
	scanf("%d", &num);
	if (num & 1)
	{
		printf("The number %d is odd.", num);
	}
	else 
	{
		printf("The number %d is even.", num);
	}
	return 0;
}
