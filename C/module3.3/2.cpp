//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
	int a[5],i,j;
	for(i=1;i<=5;i++){
		printf("enter the number:");
		scanf("%d",&a[i]);
	}
	for(j=1;j<5;j++){
		printf("\n%d",a[j]);
	}
}
