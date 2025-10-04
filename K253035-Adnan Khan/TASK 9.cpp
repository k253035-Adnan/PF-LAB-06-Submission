#include<stdio.h>
#include<math.h>
int main(){
	int members=0, rounded;
	double total;
	printf("Cinema tickets are charged based on a group, per person ($250.50).\n ");
	printf("Enter the number of people in Group:");
	scanf("%d", &members);
	total = members*250.50;
	rounded= ceil(total);
	printf("The minimum total cost for the group: %d", rounded);
	return 0;
}
