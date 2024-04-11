//3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main(){
	
	int a,b;
	printf("enter the year:");
	scanf("%d",&a);
	if(a%4==0){
		printf("it is a leap year");
	}else{
		printf("it is not a leap year");
	}
}
