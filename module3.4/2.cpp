#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("type 'a' for addition,'s' for subtraction,'m' for multiplication,'d'for dividion :");
	scanf(" %c",&c);
	switch (c){
		case 'a':
			d=a+b;
			printf("the addition is %d ",d);
			break;
		case 's':
			d=a-b;
			printf("the subtraction is %d",d);
			break;
		case 'm':
			d=a*b;
			printf("the multiplication is %d",d);
			break;
		case 'd':
			d=a/b;
			printf("the division is %d",d);
			break;		
	}
	
		
}
