//a. information -print and display emp no, emp name, address
//and age
#include<stdio.h>
struct emp_details{
	int a;
	char name[100],address[100];
	void pnt_details(){
	printf("enter the number: ");
	scanf("%d",&a);
	printf("enter your name: ");
	scanf(" %s",&name[100]);
	printf("enter the address: ");
	scanf(" %s",&a);
	}

	
	
};
int main(){
emp_details obj1;	
	
 obj1.pnt_details();
	
	
	
	
	
}
