//9. Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class add{
	public:
		int i,j,a[2][2],b[2][2],c[2][2];
	void get_data1(){
			cout<<"enter the numbers for first matrix:\n ";
		for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				cin>>a[i][j];
			}
		}
		
	}
	void get_data2(){
		cout<<"enter the numbers for second matrix:\n ";
			for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				cin>>b[i][j];
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
	void print_2(){
		for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				cout<<" "<<b[i][j];
			}
			cout<<"\n";
		}
	}
    add operator +(add obj3){
    /*	c[0][1]=a[0][1]+b[0][1];
    	c[0][0]=a[0][0]+b[0][0];
    	c[1][0]=a[1][0]+b[1][0];
    	c[1][1]=a[1][1]+b[1][1];*/
    	for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){
				c[i][j]=a[i][j]+b[i][j];
			    cout<<" "<<c[i][j];
			}
	        	cout<<"\n";
		}
	
	}
	
	
	
	
};
int main(){
	add obj,obj2,obj3;
	obj.get_data1();
	obj2.get_data2();
	cout<<"\nFIRST MATRIX:\n";
	obj.print_1();
	cout<<"\n";
    cout<<"SECOND MATRIX:\n";
	obj2.print_2();
	cout<<"\nADDITION OF  MATRIX:\n";
	obj3=obj2 + obj;
	//obj2.operator +(obj);
	
}
