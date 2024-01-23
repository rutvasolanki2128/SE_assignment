#include<stdio.h>
int main(){
	int sal,pre,sall,loan,salll;
	printf("enter your salary:");
	scanf("%d",&sal);
	pre=sal*10/100;
	sall=sal-pre;
	loan=sall*10/100;
	salll=sall-loan;
	printf("current salary:%d",salll);
	
	
}
