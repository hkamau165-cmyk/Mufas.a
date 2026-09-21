#include <stdio.h>
#define PI 3.142
int main() {
	float radius,height;
	float volume,surfacearea;
	
	printf("enter the radius:");
	scanf("%f",&radius);
	
	printf("enter the height:");
	scanf("%f",&height);
	
	volume =PI*radius*radius*height;
	surfacearea=2*PI*radius*radius+2*PI*radius*height;
	
	printf("\n---results---\n");
	printf("volume=%.2f\n",volume);
	printf("surfacearea=%.2f\n",surfacearea);
	return 0;
	
    }