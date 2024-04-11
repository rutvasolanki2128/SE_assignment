//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a<0){
		printf("negative");
	}else if(a>0){
		printf("positive");
	}else{
		printf("zero");
	}
	
}
