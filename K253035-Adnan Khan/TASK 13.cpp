#include<stdio.h>
int main(){
	int num=0, count=0, ones=0;
	printf("Enter any number:");
	scanf("%d", &num);
	while (num != 0)
	{
		if (num & 1)
		{
		count++;
		}
		num= num>>1;
	}
	ones=count;
	printf("The number of 1s in binary: %d", ones);
	return 0;
}
