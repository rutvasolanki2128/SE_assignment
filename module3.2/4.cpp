//4. WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main(){
	
	float a,b,c,d,e,f,g,h;
	printf("enter your first number: ");
	scanf("%f",&a);
	printf("enter the second number: ");
	scanf("%f",&b);
	printf("type\n '1'for addition , \n'2'for subraction, \n'3'for division, \n'4' for multiplication and \n'5' for exit:");
	scanf("%f",&c);
	
	if(c==1){
		d=a+b;
		printf(" the additionm of %f and %f is %f",a,b,d);
	}
	else if(c==2){
		e=a-b;
		printf("the subtraction of %f and %f is %f",a,b,e);
	}else if(c==3){
		f=a/b;
		printf(" the division of %f and %f is %f",a,b,f);
		
	}else if(c==4){
		g=a*b;
		printf("the multiplication of %f and %f is %f",a,b,g);
		
	}else{
		printf("thank you for using our programme");
	}
	
	
	
	
	
}
