#include<stdio.h>
int main(){

	char a[20];
          int i=0,vowel=0;
	printf("enter a string");
	scanf("%s",a);


	while(a[i]!='\0'){

		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			vowel++;}
                          i++;
	}
	printf("no of vowels %d",vowel);
}
