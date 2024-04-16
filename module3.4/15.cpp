//15.Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main(){
	int a[5],b,i,j;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	//j=1;
	for(i=0;i<5;i++){
 	  for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		//	j++;
		}
	}
		printf("ASSENDING ORDER:\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
}
	
	
}
