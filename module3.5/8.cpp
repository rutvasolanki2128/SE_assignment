//8. Write a program in C to count the total number of vowels or consonants in a
//string.
#include<stdio.h>
int main(){
	char a[10];
	int i,v=0,c=0;
	printf("enter the word: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='0' || a[i]=='u'){
			v++;
		}
		else{
			c++;
		}
	}
	printf("vowels: %d\n",v);
	printf("consonants: %d",c);
	
	
}
