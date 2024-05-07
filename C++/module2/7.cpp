//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.
#include<iostream>
using namespace std;
class myclass{
 int add,sub,div,mul,a,b;
 public:
 	myclass(){
 		cout<<"enter the 1st number: ";
 		cin>>a;
 		cout<<"enter the 2nd number: ";
 		cin>>b;
	 }
	 
 	void addition(){
	 	add=a+b;
	 	cout<<"\naddition: "<<add;
	 }
	 void subtraction(){
	sub=a-b;
	 	cout<<"\nsubtraction: "<<sub;
	 }
	 void multiplication(){
	 	mul=a*b;
	 	cout<<"\nmultiplication: "<<mul;
	 }
	 void division(){
	 	div=a/b;
	 	cout<<"\ndivision: "<<div;
	 }
 
 
 };
 int main(){
 myclass a;
 a.addition();
 a.subtraction();
 a.multiplication();
 a.division();
 	
 	
 }
