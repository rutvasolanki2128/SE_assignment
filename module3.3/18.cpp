//18.Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main(){
	int a,i,mul;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
	mul=a*i;
	printf("\n%d * %d = %d",a,i,mul);	
	}
	
}
