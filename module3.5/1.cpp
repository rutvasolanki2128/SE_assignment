//1. Write a program in C to find the length of a string without using library
//functions.
#include<stdio.h>
int main(){
	char word[50];
	int i,j=0;
	printf("enter the word: ");
	gets(word);
	
	for(i=0; word[i]!='\0';i++){
		/*printf("%c",word[i]);
		printf("\n");*/
		j=j+1;
	}
	
	printf("length= %d",j);
	
}
