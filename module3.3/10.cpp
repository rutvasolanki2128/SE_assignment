//10.Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)
#include<stdio.h>
int main(){
	
int a,i,b[2],sum=0,div=1;
	printf("enter the number:");
	scanf("%d",&a);
	b[1]=a%10;
	for(i=1;i<=100;i++){
		div=a/10;
		
		a=div;
		
		if(div==0){
			break;
		}
			if(a<10){
				b[2]=a%10;
			}
		
		}
	sum=b[1]+b[2];	
	printf("%d",sum);
	}
