#include<stdio.h>
int main(){
	int p,i,n,t,s,ci,a;
	printf("enter the principle");
	scanf("%d",&p);
	printf("enter the interest");
	scanf("%d",&i);
	printf("enter the number of years");
	scanf("%d",&n);
	
	for(t=1;t<=n;t++){
		a=p+p*i/100;
		s=a*s;
	}
	ci=s-p;
	printf("compound interest= %d",ci);
}
