/*36. Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the electricity unit consumed:");
	scanf("%d",&a);
	if(a<=50){
		b=a*0.50;
	}else if(a>50 & a<=150){
		b=a*0.75;
	}else if(a>150 & a<=250){
		b=a*1.20;
	}else{
		b=a*1.50;
	}
	c=b+b*20/100;
	printf("total electricity bill : %d",c);
	
}
