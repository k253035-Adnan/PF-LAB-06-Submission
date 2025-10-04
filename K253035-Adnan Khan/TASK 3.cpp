#include<stdio.h>
int main(){
	int n=0;
	int balance=50000, current=0;
	printf("Enter the amount to Withdraw: ");
	scanf("%d", &n);
	while (balance>1)
	{
		current=balance-n;
		printf("You have Withdrawn %d\nNow your Current Balance is: %d\n", n,current);
	    printf("\nEnter the amount to Withdraw: ");
	    scanf("%d", &n);
	    balance = current;
	}
	printf("You have Withdrawn 1\n");
	printf("Your Current Balance is now 0.");
	return 0;
}
