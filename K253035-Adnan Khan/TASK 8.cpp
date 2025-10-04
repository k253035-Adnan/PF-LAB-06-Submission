#include<stdio.h>
#include<math.h>
int main(){
	float M=0, I=0, S=0;
	float x=0;
	printf("\tTo Calculate the Magnitude of an Earthquake\n");
	printf("\t===========================================\n");
	printf("Enter the value of Intensity of Earthquake:");
	scanf("%f", &I);
	printf("Enter the standard reference value:");
	scanf("%f", &S);
	x = I/S;
	M = log10(x);
	printf("\nThe Magnitude of Earthquake is: %.2f\n", M);
	return 0;
}
