//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main(){
	int i;
	char word[10];
	printf("enter the word: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++){
		
		
		printf(" %c\n",word[i]);
	}
	
	
	
	
	
}

