//3. WAP to find reverse of string using recursion
#include<stdio.h>
int main(){
	char name[10];
	int i,j=0,a;
	printf("enter the word: ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++){
		j=j+1;
	}

	
	for(i=j;i>=0;i--){
		printf("%c",name[i]);
	}
	
	//printf("%d",j);
	
	
	
	
}
