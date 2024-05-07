/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :

20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/
#include<stdio.h>
int main(){
	float a,c,d,e,f,g,h,i;
	char b;
	printf("enter your ID");
	scanf("%d",&a);
	printf("enter your name in one letter");
	scanf(" %c",&b);
	printf("enter the unit consumed");
	scanf("%f",&c);
	
	
	
	if(c<350){
		d=c*1.20;
		//printf("total amount to pay= %f",d);
	}else if(c>=350 & c<600){
		d=c*1.50;
	//	printf("total amount to pay= %f",e);
	}else if(c>=600 & c<800){
		d=c*1.80;
	//	printf("total amount to pay= %f",f);
	}else {
	        d=2.00*c;
	    //	printf("total amount to pay= %f",g);
		}
		
		if(d>800){
			e=d*18/100;
			d=d+e;
		}	
		if(d<256){
			d=256;
		}
	    
	printf("total amount to pay= %f",d);
	/*
	
	programming
	
	
	
	*/

	
	
}
