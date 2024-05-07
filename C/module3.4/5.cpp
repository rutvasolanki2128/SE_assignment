//5. WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice
#include<stdio.h>
int main(){
	int a[5],b[5],i,j=1,temp=0;
	printf("enter the numbers for 1st set \n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);	
	}
    for(i=0;i<5;i++){
    	for(j=i+1;j<5;j++){
    		if(a[i]>a[j]){
    			temp=a[i];
    			a[i]=a[j];
   				a[j]=temp;
    			
			}
		}
	}
	printf("ASCENDING ORDER:/n");
	for(i=0;i<5;i++){
		printf("\n%d",a[i]);	
	}
	
	printf("enter the numbers for 2nd set \n");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);	
	}
    for(i=0;i<5;i++){
    	for(j=i+1;j<5;j++){
    		if(b[i]<b[j]){
    			temp=b[i];
    			b[i]=b[j];
   				b[j]=temp;
    			
			}
		}
	}
	printf("DECENDING ORDER:/n");
	for(i=0;i<5;i++){
		printf("\n%d",b[i]);	
	}

	
}
