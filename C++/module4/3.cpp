/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person{
	public:
		int age;
		char name[50];
		void scan_person(){
			cout<<"enter name:";
			cin>>name;
			cout<<"enter age:";
			cin>>age;	
		}
		void print_person(){
			cout<<"\nPERSON"<<"\n name:"<<name<<"\n  age: "<<age;
		}
};
class student:public person{
	public:
		int per;
		void scan_student(){
			cout<<"enter your percentage:";
			cin>>per;
		}
		void print_student(){
			cout<<"\nSTUDENT"<<"\n percentage:"<<per;
		}
};
class teacher:public student{
	public:
		int salary;
		void scan_teacher(){
			cout<<"enter your salary:";
			cin>>salary;
		}
		void print_teacher(){
			cout<<"\nTEACHER"<<"\n salary:"<<salary;
		}
		
		
};
int main(){
	teacher obj;

	obj.scan_person();
	obj.scan_student();
	obj.scan_teacher();
	obj.print_person();
	obj.print_student();
	obj.print_teacher();
}

