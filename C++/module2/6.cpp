/*6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class person{
	int age;
	char cntry[10],name[10];
	public:
		void get_val(){
			cout<<"enter your name: ";
			cin>>name;
			cout<<"enter your age: ";
			cin>>age;
			cout<<"enter your country's name: ";
			cin>>cntry;
		}
		void print_data(){
			cout<<"\nname: "<<name<<"\nage: "<<age<<"\ncountry: "<<cntry;
		}
};
int main(){
	person a;
	a.get_val();
	a.print_data();
}
