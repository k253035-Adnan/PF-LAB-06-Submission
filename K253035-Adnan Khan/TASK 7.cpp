#include<stdio.h>
int main(){
	int amount=0;
	int quarters=0, dimes=0, nickels=0, pennies=0;
	printf("Enter the amount: ");
	scanf("%d", &amount);
	while (amount>=25)
	{
		quarters++;
		amount = amount-25;
	}
	while (amount >= 10)
	{
		dimes++;
		amount = amount-10;
	}
	while (amount >=5)
	{
		nickels++;
		amount = amount-5;
	}
	while (amount >=1)
	{
		pennies++;
		amount = amount-1;
	}
	printf("\tNUMBER OF COINS NEEDED\n");
	printf("\t======================\n");
	printf("Quarters (25c):%d\n", quarters);
	printf("Dimes    (10c):%d\n", dimes);
	printf("Nickels  (5c): %d\n", nickels);
	printf("Pennies  (1c): %d\n", pennies);
	
}
