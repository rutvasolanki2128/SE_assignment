//13.WAP to accept 5 numbers from user and check entered number is even or odd
//using of array
#include<stdio.h>
int main(){
	int a[5],i,j;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]%2==0){
			printf("%d = even number\n",a[i]);
		}else{printf("%d = odd number\n",a[i]);
		}
	}
	
	
}
