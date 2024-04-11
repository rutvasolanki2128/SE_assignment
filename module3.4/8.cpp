
/*8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display emp no, emp name, address
and age
b. Write a program of structure for five employee that
provides the following information -print and display
emp no, emp name, address and age*/

#include<stdio.h>
int main(){
	char str1[10];
	int i,j=0,k,l=0,m;
	printf("enter the word: ");
	scanf(" %c",str1);
	for(i=0;str1[i]!='\0';i++){
		j=j+1;
	}
	for(i=j;i>=0;i--){
		for(k=0;k<=j;k++){
			
			if(str1[i]==str1[k]){
				l=l+1;		
			}		
		}
	}
	
	printf("%d",l);
	
	if(l==j){
		printf("it is plaindrome");
	}
	else{
		printf("it is not plaindrome");
		
		
	}	
	
	
	
	
	
}
