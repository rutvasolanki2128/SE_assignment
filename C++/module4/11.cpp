/*11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: 1/2 *Area* breadth
Circle: Pi * Area *Area*/
#include<iostream>
using namespace std;
class area{
	public:
		int rec,tri,cir;
		/*area(){
			cout<<"enter the circumference of circle:";
			cin>>c;
			cout<<"enter the length of rectangle:";
			cin>>lr;
			cout<<"enter the breadth of rectangle:";
			cin>>br;
			cout<<"enter the length of triangle:";
			cin>>lt;
			cout<<"enter the base of triangle:";
			cin>>bt;
			}*/
		double sum(double a){
		cir=22/7*a*a;
		cout<<"\n"<<cir;	
		}
		int sum(int b,int c){
			tri=0.5*b*c;
			cout<<"\n"<<tri;
		}	
		double sum(double d,double e){
			rec=d*e;
	    	cout<<"\n"<<rec;
			
		}
		
};
int main(){
	area obj;
	obj.sum(1.4);
	obj.sum(5,2);
	obj.sum(2.0,5.0);
	
}
