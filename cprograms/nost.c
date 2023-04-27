#include<stdio.h>

int main(){
          int i=0;
        char a[20];
            printf("enter a string");

	    gets(a);
	while(a[i]!='\0')
	{i++;}

	printf("%d",i);
}
