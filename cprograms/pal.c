#include<stdio.h>
#include<string.h>
int main(){

	char a[20],b[20];

	printf("enter a string");
	gets(a);

         strcpy(b,a);

	strrev(a);

	if(b==a){
		printf("palindrome");}
	else{printf("not palindrome");}
	}
	
