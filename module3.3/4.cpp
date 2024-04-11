//4. WAP to print table up to given numbers
#include<stdio.h>
int main(){
	int a,b,c,i,j;
	printf("enter the number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=10;j++){
			b=i*j;
			printf("\n%d * %d = %d",i,j,b);
		}
		printf("\n");
	}
	
	
	
}
