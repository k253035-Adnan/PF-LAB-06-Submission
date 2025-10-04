#include<stdio.h>
int main(){
	int num=0, mul2, mul4, mul8;
	printf("Enter any number:");
	scanf("%d", &num);
	mul2=num<<1;
	mul4=num<<2;
	mul8=num<<3;
	printf("Number multiplied by 2: %d\n", mul2);
	printf("Number multiplied by 4: %d\n", mul4);
	printf("Number multiplied by 8: %d\n", mul8);
	return 0;
}
