//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main(){
	int a,b=1,c,i;
	printf("enter the limit: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		c=i*i;
		printf("%d +",c);
		
	}
}
