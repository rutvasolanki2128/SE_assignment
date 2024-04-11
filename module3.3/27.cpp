//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
#include<stdio.h>
int main(){

int a,b,c=1,d=2,e,f=3,g,i;
printf("enter the limit: ");
scanf("%d",&a);
for(i=1;i<=a;i++){
	/*b=c/d;
	e=d/f;
	g=b-e;*/
	printf("%d/%d - %d/%d +",c,d,d,f);
	c++;
    d++;
	f++;	
}




}
