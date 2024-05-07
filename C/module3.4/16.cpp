//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main(){
	int a[5],i,j=0;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
for(i=0;i<5;i++){
		j=j+a[i];
	}
	printf("%d",j);
	
	
	
}
