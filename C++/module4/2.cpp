//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class length{
	public:
		int l;
		void get_l(){
			cout<<"enter the length:";
			cin>>l;
		}
	};
class breadth:public length{
	public:
		int b;
		void get_b(){
			cout<<"enter the bradth:";
			cin>>b;
		}
};	
class area:public breadth{
	int a;
	public:
		void areaa(){
			a=l*b;
			cout<<"\narea: "<<a;
		}
		
};
int main(){
	area obj;
	obj.get_l();
	obj.get_b();
	obj.areaa();
	
}
