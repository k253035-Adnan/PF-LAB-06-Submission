#include<stdio.h>
int main(){
	int n=0, mult;
	printf("Enter any Number: ");
	scanf("%d", &n);
	for (int i=1; i<=10; i++)
	{
		mult = n*i;
		printf("%d x %d = %d\n", n,i,mult);
	}
	return 0;
}
