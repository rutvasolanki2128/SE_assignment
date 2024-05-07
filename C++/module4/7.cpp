/*7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/
#include<iostream>
using namespace std;
class student{
	public:
    int rollno;
	student(){
	cout<<"enter your roll no.:";
	cin>>rollno;
	}
	void print_student(){
	cout<<" \nroll no.:"<<rollno;
	
	}
};
class test{
	public:
	int math,sci;
	test(){
	cout<<"enter your maths marks:";
	cin>>math;
	cout<<"enter your sci marks:";
	cin>>sci;
	}
	void print_test(){
	cout<<" \nmaths:"<<math<<" \nsci:"<<sci;
	
	}
	};
	class result: public student,public test{
		public:
			int marks;
			void mark(){
				marks=math+sci;
				}
			void print_mark(){
	         cout<<" \nmarks:"<<marks;
	
	        }
			
	};
	
	int main(){
		result obj;
		
		obj.print_student();
		obj.mark();
		obj.print_mark();
	}
