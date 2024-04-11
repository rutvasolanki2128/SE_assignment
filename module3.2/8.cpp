//8. WAP to accept the height of a person in centimeters and categorize the
//person according to their height.	

#include<stdio.h>
int main(){
	float a;
	printf("enter your height");
	scanf("%f",&a);
	if(a<=121.92){
		printf(" short");
	}else if(a>121.92 & a<182.88){
		printf("medium");
	}else{
		printf("long");
	}
	
}
