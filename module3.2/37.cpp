/*37.WAP to show

i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/
#include<stdio.h>
void mon_to_sun();
void vowel_consonant();
int main(){
	
	mon_to_sun();
	vowel_consonant();
}
void mon_to_sun(){
	int a;
	printf("enter the week number:");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("monday");
			break;
			
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;		
					
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;	
				
	}
}
void vowel_consonant(){
	char a;
	printf("\nenter the letter:");
	scanf(" %c",&a);
	switch(a){
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default :
		    printf("consonant");
			break;				
	}
	
	
	
	
	
}
