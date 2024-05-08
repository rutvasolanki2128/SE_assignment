//10.Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class a{
	public:
	char b[10],c[10];
	void get_data(){
		cout<<"enter the first string:";
		cin>>b;
		cout<<"enter the second string:";
		cin>>c;
	}
	a operator +(){
		cout<<b<<c;
		
	}
	
};
int main(){
	a obj;
	obj.get_data();
	obj.operator +();
}
