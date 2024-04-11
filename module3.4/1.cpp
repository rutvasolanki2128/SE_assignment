#include<stdio.h>
void find_max_no();

int main(){
	
	find_max_no();
}
void find_max_no(){
	int a[3];
	printf("enter the first number: ");
	scanf("%d",&a[1]);
	printf("enter the first number: ");
	scanf("%d",&a[2]);
	printf("enter the first number: ");
	scanf("%d",&a[3]);
	if(a[1]>a[2]){
		if(a[1]>a[3]){
			printf("%d is the max number",a[1]);
		}
	}else if(a[2]>a[1]){
		if(a[2]>a[3]){
			printf("%d is the max number",a[2]);
		}
	}
	 if(a[3]>a[1]){
		if(a[3]>a[2]){
			printf("%d is the max number",a[3]);
		}
	}
	
	
}
