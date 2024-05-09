/*12.Write a program to swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		
		
		
	public:
		void assign()
		{
			a=1;
			b=2;
	 }	 
	 friend void swap(A &obj);
};

void swap(A &obj){
	
		
	 
	 	obj.a=obj.a+obj.b;
	 	obj.b=obj.a-obj.b;
	 	obj.a=obj.a-obj.b;
	 	
	 	cout<<"\n a :"<<obj.a<<" b:"<<obj.b;
	 	
}
int main(){
	A obj;
	obj.assign();
	swap(obj);
}
