/*8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include<iostream>
using namespace std;
class mp{
	int ad,s,m,d;
	public:
		int op(int a,int b,int c){
			ad=a+b+c;
			cout<<"\nadd:"<<ad;
		}
		double op(double d,double e){
			s=d-e;
			cout<<"\nsubtraction:"<<s;
		}
		double op(double f,double g,double h){
			m=f*g*h;
			cout<<"\nmultiplation:"<<m;
		}
		int op(int i,int j){
			d=i/j;
			cout<<"\ndivision:"<<d;
		}
};
int main(){
	mp obj;
	obj.op(1,2,3);
	obj.op(3.0,2.0);
	obj.op(2.0,4.0,5.0);
	obj.op(4,2);
}
