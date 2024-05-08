/*12.Write a program to swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;
class a{
	private:
		int a,b;
		
		public:
	 friend void swap(){
	 
	 }
};

void swap(){
	
	
		a=1;
	 	b=2;
	 
	 	a=a+b;
	 	b=a-b;
	 	a=a-b;
	 	
}
int main(){
	a obj;
	obj.swap();
}
