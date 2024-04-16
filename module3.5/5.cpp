//5. Write a program in C to compare two strings without using string library
//functions.
#include<stdio.h>
int main(){
	char a[10],b[10];
	int i,lena=0,lenb,k=0;
	
	printf("enter the words: \n");
	gets(a);
	gets(b);
	
	for(i=0;a[i]!=0;i++){
		lena++;
	}
	for(i=0;b[i]!=0;i++){
		lenb++;
	}
	if(lena==lenb){
		
		for(i=0;i<lena;i++){
			if(a[i]!=b[i]){
				k++;
				
				
			}
		}
	if(k==0){
		printf("they are equal");
	}else{
		printf("they are not equal");
	
	}	
		
	}else{printf("they are not equal");
	}
	
	
	
	
}
