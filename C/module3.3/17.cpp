//17.Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include<stdio.h>
int main(){
	int a[10],i,even=0,odd=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even=even+1;
		}else{
			odd=odd+1;
		}
	}
	printf("\n even no. = %d",even);
	printf("\n odd no. = %d",odd);
	
	
	
	
	}

