//15.Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
int main(){
	char a[10],b;
	int i,j;
	printf("enter the word : ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[i]!='\0';j++){
        	if(a[i]<a[j]){
        		b=a[j];
			}else{
				b=a[i];
			}
		}
	}
	printf("%c",b);
	
	
}
