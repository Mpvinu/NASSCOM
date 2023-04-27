#include<stdio.h>

int main(){
          int c=0,k,i;
        char a[20],b[20];
            printf("enter a string");

	    gets(a);
	while(a[c]!='\0')

	       c++;
               
	for(i=0,k=c-1;i<c;i++,k--){
		b[i]=a[k];
	
	}
	        b[i]='\0';

	printf("%s",b);
}
