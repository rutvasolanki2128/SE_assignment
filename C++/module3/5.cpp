/*5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class triangle{
	private:
		int a,b,c;
	public:
	void get_data(){
		cout<<"enter the value of first side: ";
		cin>>a;
		cout<<"enter the value of second side: ";
		cin>>b;
		cout<<"enter the value of third side: ";
		cin>>c;
	}
	void type(){
		if(a==b){
			if(a==c){
				cout<<"\nequilateral triangle";
			}
		}
		if(a==b){
			cout<<"\nisosceles triangle";
		}
		else if(b==c){
			cout<<"\nisosceles triangle";
		}
		else if(a==c){
			cout<<"\nisosceles triangle";
		}
		else{
			cout<<"\nscalene triangle";
		}
		
		
	}			
};
int main(){
	triangle a;
	a.get_data();
	a.type();
}



