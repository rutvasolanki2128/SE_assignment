//19.6
#include<stdio.h>
int main(){
	int i,j;
	char k='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c ",k);
			k++;
		}
		k='A';
		printf("\n");
	}
	
	
}
