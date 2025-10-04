#include<stdio.h>
int main(){
	int num, digit =0, reversed = 0;
	printf("Enter any positive integer: ");
	scanf("%d", &num);
	while (num>0)
	{
		digit = num % 10;
		num = num/10;
		reversed = reversed * 10 + digit;
	}
	printf("Reversed Number: %d", reversed);
	return 0;
}
