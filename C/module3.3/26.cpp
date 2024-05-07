//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
	int a,b,c,d,e=3,i;
	printf("enter the limit: ");
	scanf("%d",&a);
	b=1;
	c=2;
	printf(" %d +",b);
	for(i=1;i<=a;i++){
		d=b+c;
		printf("%d +",d);
		c++;
		b=d;
	}
}
