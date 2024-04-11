//12.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the first value");
	scanf("%d",&a);
	printf("\nenter the second value");
	scanf("%d",&b);
	printf("\nenter the third value");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d is the biggest number",a);
		if(b>a && b>c){
		printf("%d is the biggest number",b);
		
	}
		
	}
	else{
		printf("%d is the biggest number",c);
	}
}
