//19.4
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=6;i++){
		for(j=6;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	
}
