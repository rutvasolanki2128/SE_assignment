//3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
int main(){
	int i,j=0;
	char word[10];
	printf("enter the word: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++){
		j=j+1;
		
	
	}
    //printf("%d",j);

	for(i=j-1; word[i]!='\0';i--){
		printf(" %c\n",word[i]);
	}
	
}
