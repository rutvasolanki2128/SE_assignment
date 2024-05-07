/*4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class A{
	public:
	int accno,balance,deposit,withdraw;
	char name[10],accname[10];
	void assign_values(){
		cout<<"\nenter your name: ";
		cin>>name;
		cout<<"\nenter your account number: ";
		cin>>accno;
		cout<<"\nenter your account name: ";
		cin>>accname;
		cout<<"\nenter your balance: ";
		cin>>balance;
	}
	void depositt(){
		cout<<"\nenter the amount you want to deposit: ";
		cin>>deposit;
		
    }
	void withdraww(){
		cout<<"\nenter the amount you want to withdraw: ";
		cin>>withdraw;
		balance=balance+deposit;
		if(balance<withdraw){
			printf("you cannot withdraw because of insufficient balace");
			withdraw=0;
		}
		
	}
	void displayy(){
			balance=balance-withdraw;
			cout<<"\nname: "<<name<<"\nbalance: "<<balance;
		}
	
};
int main(){
	A a;
	a.assign_values();
	a.depositt();
	a.withdraww();
	a.displayy();
}
