//30.WAP to convert years into days and days into years

#include<stdio.h>
int main(){
	
	int a,b,s,c;
	printf("enter the no of years:");
	scanf("%d",&a);
	printf("enter the no of days:");
	scanf("%d",&s);
	b=a*365;
	c=s/365;
	printf(" years to days:%d",b);
	printf(" \ndays to year:%d",c);
}
