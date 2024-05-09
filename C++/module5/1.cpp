//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename t>
t change(t a,t b){
int c=0;
c=a;
a=b;
b=c;
cout<<"a= "<<a;
cout<<"b= "<<b;

}
	
	


int main(){

	change<int>(3,7);
}
