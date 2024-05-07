//9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
int main(){
	char a[10];
	int i,j=0;
	printf("enter the word: ");
    gets(a);
    
    for(i=0;a[i]!='\0';i++){
    	j++;
	}
	printf(" total characters: %d",j);
	
}
