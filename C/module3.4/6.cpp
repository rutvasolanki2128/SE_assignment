//6. WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array
#include<stdio.h>
int main(){
	int a[2][2],b[2][2],c[2][2],d[2][2],i,j;
	printf("enter the number for first matrix:");
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the number for second matrix:");
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	//additon
	printf("additon of matrix is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		c[i][j]=a[i][j]+b[i][j];
		printf("%d",c[i][j]);
		}
		printf("\n");
	}
	//subtraction
	printf("subtraction of matrix is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		c[i][j]=a[i][j]-b[i][j];
		printf("%d",c[i][j]);
		}
		printf("\n");
	}
	//multiplication
	printf("multiplication of matrix is: \n");
	/*
	a[1][1]*b[1][1]+a[1][2]*b[2][1]  a[1][1]*b[1][2]+a[1][2]*b[2][2]
	a[2][1]*b[1][1]+a[2][2]*b[2][1]  a[2][1]*b[1][2]+a[2][2]*b[2][2]
	
	*/
	d[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
	d[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	d[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
	d[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}      
	
	
	
	
}
