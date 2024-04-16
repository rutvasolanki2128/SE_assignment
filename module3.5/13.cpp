/*13.Write a program in C to remove characters from a string except alphabets.*/
#include<stdio.h>
int main(){
	int i,j=0;
	char word[50];
	printf("enter the word or sentence: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++){
		if(word[i]>=65 && word[i]<=90){
			printf("%c",word[i]);
		}else if(word[i]>=97 && word[i]<=122){
			printf("%c",word[i]);
		}else{
			j++;
		}
	}

	
	
	
}
