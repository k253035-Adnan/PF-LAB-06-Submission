#include<stdio.h>
int main(){
	int x=0, sum=0;
//	The loop runs at least once, which is ideal for user input.
//  The program keeps asking for a number, adds it to sum, and prints the result.
//  When the user enters 0, the loop terminates.
	do
	{
	printf("Enter any Number:\n");
	scanf("%d", &x);
	sum=sum+x;
	printf("Current Sum: %d\n", sum);	
	}while (x !=0);
	printf("Final Sum: %d\n", sum);
	return 0;
}
