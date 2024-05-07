/*6. Write a C++ Program to show access to Private Public and Protected using
Inheritance*/
#include<iostream>
using namespace std;
class name{
private:
    char n[10];
    	public:
	void scan_name(){
	cout<<"enter your name:";
	cin>>n;
	}
	void print_name(){
	cout<<" \nname:"<<n;
	
	}
	
};
class standard:public name{
	protected:
	int std;
	public:
	void scan_std(){
	cout<<"enter your standard:";
	cin>>std;
	}
	void print_std(){
	cout<<" \nstandard:"<<std;
	
	}
	
};
class marks:public standard{
	public:
	int mark;
	void scan_mark(){
	cout<<"enter your mark:";
	cin>>mark;
	}
	void print_marks(){
	cout<<" \nmarks:"<<mark;
	
	}
	
};
int main(){
	marks obj;
	obj.scan_name();
	obj.scan_std();
	obj.scan_mark();
	obj.print_name();
	obj.print_std();
	obj.print_marks();
}

