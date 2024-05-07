/*17.Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter the 1st value");
	scanf("%d",&a);
	printf("enter the 2nd value");
	scanf("%d",&b);
	printf("enter the 3rd value");
	scanf("%d",&c);
	d=a+b+c;
	if(d==180){
		printf("triangle can be formed");
		}else{printf("triangle cannot be formed");
		}

	
	
}
