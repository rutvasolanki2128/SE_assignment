//14.Perform 2D matrix array
#include<stdio.h>
int main(){
	int a[2][2],i,j;
	printf("enter the numbers to form an array:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			//	printf("1 ");
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
