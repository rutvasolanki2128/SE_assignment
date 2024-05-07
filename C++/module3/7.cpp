/*7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class date{
	int day,month,year,a;
    
	public:
		date( ){
	         a=0;
          }   
		void get_data(){
			cout<<"enter the day:";
			cin>>day;
			cout<<"enter the month in numbers:";
			cin>>month;
			cout<<"enter the year:";
			cin>>year;
		}
		void valid(){
			if(month>12){
				cout<<"invalid data";
				a++;
			}if(year/4==0){
				if(month==2){
					if(day>29){
						cout<<"as it is a leap year,days cannot be more tham 29";
						a++;
					}
				}
				}
			if(month==2){
					if(day>28){
						cout<<"as it is february,days cannot be more than 28";
						a++;
					}
				}
		}
		void print_data(){
			if(a==0){
				cout<<day;
				cout<<"-"<<month;
				cout<<"-"<<year;
			}else{
				cout<<"\nas it a invalid data...it will not get printed";
			}
			
		}
};
int main(){
	date obj;
	obj.get_data();
	obj.valid();
	obj.print_data();
	
	
	
	
}
