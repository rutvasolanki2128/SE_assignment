/*5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class student{
	public:
    int rollno;
	void scan_student(){
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
	void scan_test(){
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
		obj.scan_student();
		obj.scan_test();
		obj.print_student();
		obj.mark();
		obj.print_mark();
	}
