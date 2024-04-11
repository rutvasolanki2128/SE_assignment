/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include<stdio.h>
void even();

int main(){
 even();
 	
}
void even(){
	int i[10],a,b,c=0,d=0;
	for(a=0;a<10;a++){
		printf("enter the number:");
		scanf("%d",&i[a]);
		
	}for(b=0;b<10;b++){
		if(i[b]%2==0){
			c=c+i[b];
			printf("\n%d = even number",i[b]);
		
		}else{
			d=d+i[b];
		printf("\n%d = odd number",i[b]);
		
		}
	}
	printf("\nthe sum of all even numbers = %d",c);
	printf("\nthe sum of all odd numbers = %d",d);
	
	}

