/*11.Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/
#include<stdio.h>
int main(){
	int i;
	char a[10],b[10];
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>=65 && a[i]<=90){
			b[i]=a[i]+32;
			
		}
		if(a[i]>=97 && a[i]<=122){
			b[i]=a[i]-32;
			
		}
	}puts(b);
	
	
}
