#include<stdio.h>
#include<math.h>
int main(){
	int h=0;
	float angle, sh;
	printf("To Calculate the length of shadow of building.\n");
	printf("Enter the Height of Building:");
	scanf("%d", &h);
	printf("\nEnter the Angle of Elevation (in radians):");
	scanf("%f", &angle);
    angle=tan(angle);
    sh = h/angle;
    printf("The length of Shadow of Building is: %.2f", sh);
    return 0;
}
