//11.WAP to accept 5 numbers from user and display in reverse order using for
//loop and array
#include<stdio.h>
int main(){
	int a[5],b,div,i,j;
	
	printf("enter the numbers: ");
	printf("\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		}
	printf("reverse of the numbers: ");
	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			div=a[i]/10;
			b=a[i]%10;
			a[i]=div;
			if(b==0){
				break;
			}else{
				printf("%d",b);
			}
		
		}
		printf("\n");
	}
	
}
