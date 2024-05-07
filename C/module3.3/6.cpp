//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
	int a,b,c,j,i,k;
	printf("enter the limit");
	scanf("%d",&j);
	a=0;
	b=1;
	printf("%d +",a);
    printf("%d +",b);   
	for(i=1;i<=j-2;i++){
		c=a+b;
		printf(" %d +",c);
		a=b;
		b=c;
		
		
	}
	
	
	
}
