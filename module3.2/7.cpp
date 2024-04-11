//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
	int a;
	printf("enter your marks:");
	scanf("%d",&a);
	
	if(a<25 & a>=0){
		printf("fail");
	}else if(a>=25 & a<=100){
		printf("pass");
	}else{
		printf("invalid input");
	}
}
