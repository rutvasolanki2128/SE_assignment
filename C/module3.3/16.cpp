//16.Calculate the Sum of Natural Numbers Using the While Loop
//caluculating the sum of only 10 natural numbers
#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			printf("0 is not a natural number");
			break;
			
		}else{
		sum=sum+a[i];	
		}
		
	}
printf("\n sum= %d",sum);
	
	
	
}
