//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
	int a,b,c,d,e;
	
	printf("enter the cost price:");
	scanf("%d",&a);
	printf("enter the selling price:");
	scanf("%d",&b);
	if(a>b){
		printf("loss");
	}else if(a<b){
		printf("profit");
	}else{
		printf("no profit no loss");
	}
	
}
