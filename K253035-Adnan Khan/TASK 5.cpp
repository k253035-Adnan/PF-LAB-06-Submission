#include<stdio.h>
int main(){
	int num=0, fact=1;
	printf("Enter the number of Participants: ");
	scanf("%d", &num);
	for (int i=1; i<=num; ++i)
	{
		fact= fact*i;
	}
		printf("Total arrangements for %d is: %d", num, fact);
	return 0;
}
