/*5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class rectangle{
	int l,b,a,p;
	public:
		void area(){
			cout<<"\nenter length: ";
			cin>>l;
			cout<<"\nenter breadth: ";
			cin>>b;
			a=l*b;
			cout<<"\narea: "<<a;
		}
		void parimeter(){
			p=2*l+2*b;
			cout<<"\nperimeter: "<<p;
		}
};
int main(){
	rectangle a;
	a.area();
	a.parimeter();
}
