//13.calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main(){
int a,fact=1,i=1;
	printf("enter the number: ");
	scanf("%d",&a);
	while(i<=a){
		fact=fact*i;
		i++;
	}
	
	printf("factorial= %d",fact);
}
