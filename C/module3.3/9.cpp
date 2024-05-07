//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main(){
	int a,i,b,sum=0,div=1;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=1;i<=100;i++){
		div=a/10;
		b=a%10;
		a=div;
		sum=sum+b;
		if(div==0){
			break;
		}
		
	}
	printf("%d",sum);
	
	
	
	
	
	
	
}
