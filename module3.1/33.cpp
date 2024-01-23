//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter the number :");
	scanf("%d",&a);
	b=a*a;
	c=a*a*a;
	printf("%d^1=%d",a,a);
	printf("\n%d^2=%d",a,b);
	printf("\n%d^3=%d",a,c);


	
}
