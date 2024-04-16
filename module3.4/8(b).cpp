/*b. Write a program of structure for five employee that
provides the following information -print and display
emp no, emp name, address and age*/
#include<stdio.h>
struct details_of_emp{
	int no,age;
	char address[100],name[50];
	void scan(){
		printf("\nenter your number: ");
		scanf("%d",&no);
		printf("\nenter your name: ");
		scanf("%s",&name);
		printf("\nenter your age: ");
		scanf("%d",&age);
		printf("\nenter your address: ");
		scanf("%s",&address);
		}
		void print(){
			printf("\nnumber: %d",no);
			printf("\nage: %d",age);
			printf("\naddress: %s",address);
			printf("\nname: %s",name);
		}
	
	
	
};
int main(){
details_of_emp obj1,obj2,obj3,obj4,obj5;
	
	
	obj1.scan();
	obj1.print();
	
	obj2.scan();
	obj2.print();
	
	obj3.scan();
	obj3.print();
	
	obj4.scan();
	
	obj4.print();
	obj5.scan();
	
	obj5.print();
	
	
	
	
	
	
	
}
