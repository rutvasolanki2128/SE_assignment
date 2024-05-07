//11.Accept 5 names from user at run time.
#include<stdio.h>
int main(){
	char a[10];
	int i,j;
	for(i=0;i<5;i++){
		scanf("%s",&a[i]);
	}
	for(j=0;j<5;j++){
		printf("\n%s",a[j]);
	}
	
	
}
