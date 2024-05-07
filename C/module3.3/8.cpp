//8. Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
int main(){
	
	int a,div,b[10],i,large=0;
	printf("enter the number");
	scanf("%d",&a);
	while(a>0){
		div=a/10;
		i=a%10;
		a=div;
		if(large<i){
			large=i;
		}
	}
	printf("%d",large);
	
	
	
	
	
	
	
}
