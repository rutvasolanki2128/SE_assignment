/*8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/
#include<iostream>
using namespace std;
class student{
	int standard,rollno,marks;
	char name[10];
	public:
		void get_data(){
			cout<<"enter your name:";
			cin>>name;
			cout<<"enter your standard:";
			cin>>standard;
			cout<<"enter your roll no:";
			cin>>rollno;
			cout<<"enter your marks:";
			cin>>marks;
			}
		void grade(){
			if(marks>=90 && marks<=100){
				cout<<"\nA GRADE";
			}else if(marks>=70 && marks<90){
				cout<<"\nB GRADE";
			}else if(marks>=50 && marks<70){
				cout<<"\nC GRADE";
			}else if(marks>=30 && marks<50){
				cout<<"\nD GRADE";
			}else if(marks>=25 && marks<30){
				cout<<"\nE GRADE";
			}else{
				cout<<"\nFAIL";
			}
		}
		void print(){
			cout<<"\nname:"<<name<<"\nstandard:"<<standard<<"\nrollno:"<<rollno<<"\nmarks:"<<marks;
		}	
};
int main(){
student obj;
obj.get_data();
obj.print();
obj.grade();
}

