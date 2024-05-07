/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/
#include<iostream>
using namespace std;
class circle{
	int r,a,c;
	public:
		void area(){
			cout<<"enter the radius to calculate area and circumference: ";
			cin>>r;
		a=22/7*r*r;	
		cout<<"\narea: "<<a;
		}
		void circumference(){
			c=2*22/7*r;
			cout<<"\ncircumference: "<<c;
			
		}
	
};
int main(){
	circle a;
	a.area();
	a.circumference();
}
