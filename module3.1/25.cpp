//25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	printf("\nenter your 1st expense",a);
	scanf("%d",&a);
	printf("\nenter your 2nd expense",b);
	scanf("%d",&b);
	printf("\nenter your 3rd expense",c);
	scanf("%d",&c);
	printf("\nenter your 4th expense",d);
	scanf("%d",&d);
	printf("\nenter your 5th expense",e);
	scanf("%d",&e);
	
	f=a+b+c+d+e;
	g=f/5;
	printf("average expense= %d",g);
	
}
