//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
	int a,b,c,i,d;
	a=1;
	b=2;
	
	printf("enter the limit: ");
	scanf("%d",&d);
	printf("%d + %d +",a,b);
	for(i=3;i<=d;i++){
		c=a+b;
		printf(" %d +",c);
		a=b;
		b=c;
	}	
	
}
