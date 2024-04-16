//7. Write a program in C to copy one string to another string.
#include<stdio.h>
int main(){
	
	char a[10],b[10];
	int i,j;
	printf("enter the word:");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
		
	}
	printf("%s",b);
	
	
}
