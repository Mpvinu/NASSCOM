#include<stdio.h>

int main(){
          int c=0,k,i,flag=0;
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

	for(i=0;i<c;i++){

		if(a[i]!=b[i]){
		  flag=1;
		  break;}
		  }
		  if(flag==1){
		  printf("not palindrome");}
		  else{printf("palindrome");}
}
