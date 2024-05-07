//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
	public:
		int a,b,sum,substract,multiply,divide;
		
		void calc(){
			cout<<"enter the numbers: \n";
			cin>>a>>b;
			sum=a+b;
			substract=a-b;
			multiply=a*b;
			divide=a/b;
			cout<<"\nsum: "<<sum<<"\nsubtraction: "<<substract<<"\nmultiplication:"<<multiply<<"\ndivision: "<<divide;
		}
	
};
int main(){
	calculator obj1;
	obj1.calc();
	}
