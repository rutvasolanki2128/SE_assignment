
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
	//scanf(" %s",&str1);
	gets(str1);
	for(i=0;str1[i]!='\0';i++){
		j=j+1;
	}
	//printf("\n length %d",j);
	k=0;
	for(i=j-1;i>=0;i--){
			
			if(str1[i]!=str1[k]){
				printf("\n %c  %c",str1[i],str1[k]);
				l++;
			}
			k++;		
		
	}
	
	printf("\n loop %d",l);
	
	if(l==0){
		printf("it is plaindrome");
	}
	else{
		printf("it is not plaindrome");
		
		
	}	

}
