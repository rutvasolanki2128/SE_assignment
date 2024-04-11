/*32. Write a C program to input basic salary of an employee and calculate
its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */
#include<stdio.h>
int main(){
	
	int a,hra,da,c;
	printf("enter your basic salary;");
	scanf("%d",&a);
	if(a<=10000){
		hra=a*20/100;
		da=a*80/100;
		c=a+hra+da;
		printf("gross salary = %d",c);
	}else if(a>10000 & a<=20000){
		hra=a*25/100;
		da=a*90/100;
		c=a+hra+da;
		printf("gross salary = %d",c);
		
	}else{
		hra=a*30/100;
		da=a*95/100;
		c=a+hra+da;
		printf("gross salary = %d",c);
	}
	
	
}
