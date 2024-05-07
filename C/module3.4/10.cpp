//10.WAP to perform Palindrome number using for loop and function
#include<stdio.h>
void palindrome_no();

int main(){
palindrome_no();
}
void palindrome_no(){
	int a,b[10],c=0,sum[10],div,i,j,d=0;
	printf("enter the number: ");
	scanf("%d",&a);

	for(i=0;i<10;i++){
		div=a/10;
		b[i]=a%10;
		a=div;
		
		
		if(b[i]==0){
			break;
		}else{
			c++;
			sum[i]=b[i];
		//	printf("\n%d and %d",b,i);
		}
	}
//	printf("%d",c);
	j=0;
for(i=c-1;i>=0;i--){
	/*for(j=0;j<c;j++){
		if(sum[i]!=b[j]){
			d++;
		}
		
	}*/
	if(sum[i]!=b[j]){
			d++;
		}
	j++;
}
	if(d==0){
	printf("it is palindrome");
	}else{
	printf("it is not  palindrome");
	}
	
}
