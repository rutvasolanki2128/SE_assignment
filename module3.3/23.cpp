//23. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
	int i,a,b,div;
	printf("enter the number: ");
	scanf("%d",&a);
	
	for(i=1;i<=100;i++){
		
		div=a/10;
		b=a%10;
		if(b==0){
			break;
		}
		printf("%d",b);
		a=div;
		
		
	}
	
	
	}
