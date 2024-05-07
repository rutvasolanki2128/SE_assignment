//27.Convert days into months
#include<stdio.h>
int main(){
	int a,b,s;
	printf("enter the no of days:");
	scanf("%d",&a);
	b=a/30;
	s=a%30;
	printf("no of months= %d and no of days left= %d",b,s);
}
