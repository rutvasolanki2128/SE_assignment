// (°F - 32) × 5/9; 
// 26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
	float f,c;
	printf("enter the degree");
	scanf("%f",&f);
	// c = f*5/9-32*5/9;
	c = ((f-32)*(5/9));

	printf("%f",c);
}
