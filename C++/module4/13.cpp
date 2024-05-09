/*13.Write a program to find the max number from given two numbers
using friend function*/
#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		public:
		 friend void max();
		
};
void max(){
	int a,b;
	cout<<"enter the first number:";
	cin>>a;
	cout<<"enter the second number:";
	cin>>a;

	if(a>b){
		cout<<a<<" is the max number.";
	}else {
		cout<<b<<" is the max number.";
	}
		
	
}
int main(){
A obj;
max();
}
