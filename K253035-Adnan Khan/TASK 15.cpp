#include<stdio.h>
int main(){
	int a=0,b=0;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	printf("\n BEFORE SWAPPING\n");
	printf("a=%d  b=%d", a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAFTER SWAPPING\n");
	printf("a=%d  b=%d", a,b);
	return 0;
}
