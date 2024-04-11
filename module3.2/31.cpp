//31.Write a program in C to read any Month Number in integer and display the
//number of days for this month.
#include<stdio.h>
int main(){
	int a,b;
	printf("enter the month's no.");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf(" january");
			printf("\n no. of days : 31");
			break;
		case 2:
			printf(" february");
			printf("\n no. of days : 28");
			break;
		case 3:
			printf(" march");
			printf("\n no. of days : 31");
			break;
		case 4:
			printf(" april");
			printf("\n no. of days : 30");
			break;
		case 5:
			printf(" may");
			printf("\n no. of days : 31");
			break;
		case 6:
			printf(" june");
			printf("\n no. of days : 30");
			break;
		case 7:
			printf(" july");
			printf("\n no. of days : 31");
			break;
		case 8:
			printf(" august");
			printf("\n no. of days : 31");
			break;
		case 9:
			printf(" september");
			printf("\n no. of days : 30");
			break;
		case 10:
			printf(" october");
			printf("\n no. of days : 31");
			break;
		case 11:
			printf(" november");
			printf("\n no. of days : 30");
			break;
		case 12:
			printf(" december");
			printf("\n no. of days : 31");
			break;										
				
	}
	
	
}
