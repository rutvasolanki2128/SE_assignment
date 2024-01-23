//28.Convert years into days and months
#include<stdio.h>
int main(){
	
	int a,b,s;
	printf("enter the no of years:");
	scanf("%d",&a);
	b=a*365;
	s=a*12;
	printf(" no of days:%d",b);
	printf(" \nno of months:%d",s);
}
