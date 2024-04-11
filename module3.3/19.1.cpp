//19. patterns
//pattern no.1
#include<stdio.h>
int main(){
	int i,j,a,b;
	a=1;
	b=0;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
		    printf("%d",a);
		    a=b;
		    if(a==0){
		    	b=1;
			}else{
				b=0;
			}
		    }
		    printf("\n");
			}
		
	}
	
	

