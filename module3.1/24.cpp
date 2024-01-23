#include<stdio.h>
int main(){
	//24.Accept 5 employees name and salary and count average and total salary
	
	int a,b,c,d,e,f,g;
	char h,i,j,k,l;
	printf("enter your name in only one letter:");
	scanf("%c",&h);
	printf("enter the salary of %c",h);
	scanf("%d",&a);
	printf("enter your name in only one letter:");
	scanf(" %c",&i);
	printf("\nenter the salary of %c",i);
	scanf("%d",&b);
	printf("\nenter you name in only one letter:");
	scanf(" %c",&j);
	printf("\nenter the salary of %c",j);
	scanf("%d",&c);
	printf("\nenter you name in only one letter:");
	scanf(" %c",&k);
	printf("\nenter the salary of %c",k);
	scanf("%d",&d);
	printf("\nenter you name in only one letter:");
	scanf(" %c",&l);
	printf("\nenter the salary of %c",l);
	scanf("%d",&e);
	
	f=a+b+c+d+e;
	g=f/5;
	printf("total salary= %d",f);
	printf("\naverage salary =%d",g);
	
	
	
	
}
