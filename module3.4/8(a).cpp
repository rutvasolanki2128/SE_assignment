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
	scanf(" %s",&name);
	printf("enter the address: ");
	scanf(" %s",&address);
	
	//printing
	 printf("name = %s ",name);
	 printf("number = %d ",a);
	 printf("address = %s: ",address);
	
	}

	
	
};
int main(){
emp_details obj1;	
	
 obj1.pnt_details();
	
	
	
	
	
}
