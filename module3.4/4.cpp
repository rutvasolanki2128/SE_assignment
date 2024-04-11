//4. WAP to find factorial using recursion
#include<stdio.h>
int fact();
int main(){
//	int fact();
	printf("%d",fact());
}
int fact(){
	int a,b=1,i;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		b=b*i;
		
	}
	return b;
}
