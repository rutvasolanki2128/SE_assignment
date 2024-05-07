//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
void find_length_of_string_();
int main(){
	
	
	find_length_of_string_();
	
}
void find_length_of_string_(){
	char name[10];
	int i,j=0,a;
	printf("enter the word: ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++){
		j=j+1;
		
	}printf("%d",j);
}
