/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer{
	public:
	int truns,aruns,tp;
	char bp[50];
};
class batsman: public cricketer{
	public:
		void get_data(){
			cout<<"enter the total runs:";
			cin>>truns;
			cout<<"enter the totaplayers:";
			cin>>tp;
			cout<<"enter the best performance:";
			cin>>bp;
		}
		void avg_runs(){
			aruns=truns/tp;
		}
		void print(){
			cout<<"\ntotal runs:"<<truns<<"\naverage runs:"<<aruns<<"\nbest perfomance:"<<bp;
		
	}
};
int main(){
	batsman obj;
	obj.get_data();
	obj.avg_runs();
	obj.print();
}
