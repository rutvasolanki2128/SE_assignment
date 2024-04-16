//4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main(){
	int i,j=0;
	char word[10];
	printf("enter the word: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++){
		j=j+1;
		
	
	}
    printf("number of words= %d",j);
	
	
	}
