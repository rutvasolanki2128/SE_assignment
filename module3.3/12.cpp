//12.Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
int main(){
int a,c,b,sum=0,i,div;
  printf("enter the number:");
  scanf("%d",&a);
  c=a;
  for(i=1;a!=0;i++){
  	div=a/10;
  	b=a%10;
  	a=div;
  	sum=sum+b*b*b;
  	}
  //	printf("%d",sum);
if(sum==c){
	printf("\nit is an armstrong number");
	
}else{
	printf("\nit is not an armstrong number");
}

}
