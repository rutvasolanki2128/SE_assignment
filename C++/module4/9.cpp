//9. Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class add{
	public:
		int i,j,a[2][2];
		
	void get_matrixA(){
			cout<<"enter the numbers for first matrix:\n ";
		for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				cin>>a[i][j];
			}
		}
		
	}

	void print_1(){
		for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				cout<<" "<<a[i][j];
			}
			cout<<"\n";
		}
	}

    void operator+(add obj2){

    	for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				a[i][j]=a[i][j]+obj2.a[i][j];
			    cout<<" "<<a[i][j];
			}
	        	cout<<"\n";
		}
	
	}
	
	
	
	
};
int main(){
	add obj1,obj2,obj3;
	
	obj1.get_matrixA();
	obj2.get_matrixA();
	
	cout<<"\nObject 1 MATRIX:\n";
	obj1.print_1();
	
	cout<<"\n";
    cout<<"object 2 MATRIX:\n";
	obj2.print_1();
	
	cout<<"\nADDITION OF  MATRIX:\n";
	obj1 + obj2;
	
}
