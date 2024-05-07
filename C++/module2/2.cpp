/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
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
	A obj;
	obj.assign_values();
	obj.depositt();
	obj.withdraww();
	obj.displayy();
}

