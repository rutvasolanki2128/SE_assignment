#include<stdio.h>
int main(){
	float p,r,t,s;
	printf("enter the value of principle:");
	scanf("%f",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter the time period:");
	scanf("%f",&t);
	s=p*r*t/100;
	printf("simple interest = %f",s);
	
}
