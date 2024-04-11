
#include<stdio.h>
int main()
{
	int i,num,div,n2;
	
	printf("enter your number: ");
	scanf("%d",&num);
	
	for(i=1;i<=100;i++){
		div=num/10;
		n2=num%10;
		printf("%d",n2);
		num=div;
		if(num==0){
			break;
		}
	}
	
	
	
	
	
}
