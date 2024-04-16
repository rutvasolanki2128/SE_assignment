/*6. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>
int main(){
	char a[100];
	int i,j,sc,no,sp,al;
	sc=0;
	no=0;
	sp=0;
	al=0;
	printf("enter the sentence: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>=33 && a[i]<=47){
			sc=sc+1;
				
			}else if(a[i]>=58 && a[i]<=64){
			sc=sc+1;
			
		}else if(a[i]>=48 && a[i]<=57){
			no=no+1;	
		}else if(a[i]==32){
			sp=sp+1;	
		}else{
			al=al+1;	
		}
	}
	printf("total special characters: %d\n",sc);
	printf("total digits: %d\n",no);
	printf("total alphabets: %d\n",al);
	printf("total spaces: %d\n",sp);
	
	
	
}
