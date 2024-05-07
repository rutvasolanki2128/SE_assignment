/*6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/
#include<iostream>
using namespace std;
class employee{
	private:
		int id,salary,rate;
		char name[10];
	public:
	 void get_data(){
	 	cout<<"enter employee's name:";
	 	cin>>name;
	 	cout<<"enter ID:";
	 	cin>>id;
	 	cout<<"rate the employee from 1 to 5:";
	 	cin>>rate;
	 }
	 void salaryy(){
	 	if(rate==1){
	 		salary=10000;
	 		cout<<"salary:";
	 	    cout<<salary;
		 }
		else if(rate==2){
	 		salary=20000;
	 		cout<<"salary:";
	 	    cout<<salary;
		 }
		else if(rate==3){
	 		salary=30000;
	 		cout<<"salary:";
	 	    cout<<salary;
		 }
		else if(rate==4){
	 		salary=40000;
	 		cout<<"salary:";
	 	    cout<<salary;
		 } 
		 else{
	 		salary=50000;
	 		cout<<"salary:";
	 	    cout<<salary;
		 } 
		 
	 }	
};
int main(){
	employee a;
	a.get_data();
	a.salaryy();
}
