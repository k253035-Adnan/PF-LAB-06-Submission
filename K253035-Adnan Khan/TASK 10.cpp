#include<stdio.h>
#include<math.h>
int main(){
	int n=0,t=0;
	double p, r, a;
	printf("Enter the principle amount (P):");
	scanf("%lf", &p);
	printf("\nEnter the annual interest rate (in percent):");
	scanf("%lf", &r);
	printf("\nEnter the number of times interest is compound per year (n):");
	scanf("%d", &n);
	printf("\nEnter the times in years (t):");
	scanf("%d", &t);
	r=r/100;
	a= p*pow((1+r/n), n*t);
	printf("Future value of the investment is (A): %.2lf\n", a);
	return 0;
}
