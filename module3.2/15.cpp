/*
15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 ------------------------------------- Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible
*/
#include<stdio.h>
int main(){
	int math,phy,chem,a,b,c,d;
	printf("enter the maerks in maths:");
	scanf("%d",&math);
	printf("enter the maerks in chemistry:");
	scanf("%d",&chem);
	printf("enter the maerks in physics:");
	scanf("%d",&phy);
	
	a=math+phy+chem;
	b=math+phy;
	
	if(math>=65 ){
		if(phy>=55){
			if(chem>=50){
				if(a>=190 || b>=140){
					printf("the candidate is eligible");
					
				}
				
			}
		}
	}else{
		printf("the candidate is not eligibe");
	}
	
}
