//14.Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main(){
	int a[5],fact=1,i,j,k;
	printf("enter the numbers :");
	for(i=0;i<5;i++){
	    printf("\n"); 
		scanf("%d",&a[i]);
   }

	for(k=0;k<5;k++){
		for(j=1;j<=a[k];j++){
			fact=fact*j;
		}
		printf("\n factorial of %d = %d ",a[k],fact);
		fact=1;
	}
	
	
}
