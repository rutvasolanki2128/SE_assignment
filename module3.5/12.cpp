/*12.Write a program in C to find the number of times a given word 'is' appears in
the given string.*/
#include<stdio.h>
int main(){
	int i,j,k=0;
	char word[50];
	printf("enter any word of sentence: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++){
		j=i+1;
		if(word[i]=='i'&& word[j]=='s'){
			k++;
		}
		j=0;
	}
	
	printf("the number of times word'is' occurs is: %d",k);
	
		
	
	
}
