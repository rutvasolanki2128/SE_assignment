/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/
#include<iostream>
using namespace std;
class carr{
	private:
		int year;
		char com[50],mod[50];
	public:
		void get_data(){
			cout<<"enter the company's name: ";
			cin>>com;
			cout<<"enter the model of the car:  ";
			cin>>mod;
			cout<<"enter the year: ";
			cin>>year;
			
		}
	void print_data(){
		cout<<"\ncompany's name: "<<com;
		cout<<"\nmodel of the car:  "<<mod;
		cout<<"\nthe year: "<<year;
			
	}	
			
};
int main(){
	carr a;
	a.get_data();
	a.print_data();
	
}
