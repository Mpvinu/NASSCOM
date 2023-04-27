#include<stdio.h>
#include<ctype.h>
int main(){

	char grade;
	printf("Enter the grade");
	scanf("%c",&grade);
	grade = toupper(grade);


	switch(grade){
		case 'E':
	
			printf("Excellent");
			break;
		case 'V':
			printf("Very good");
			break;
		case 'G':
			printf("Good");
			break;
		case 'A':
			printf("Average");
			break;
		case 'F':
			printf("Fail");
			break;
		default:
			printf("Invalid Grade");
	}
}

	
