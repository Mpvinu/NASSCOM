#include<stdio.h>

int main(){

	int i,k,c1=0,c2=0;
	char a[20],b[20],c[20];

	printf("enter first string");
	gets(a);
	while(a[c1]!=0)
		c1++;

	printf("enter second string");
	gets(b);
	while(b[c2]!=0)
		c2++;
          for(i=0;i<c1;i++,k++){
		  c[k]=a[i];
	  }
	   c[k]=' ';
	  k++; 
	  
          for(i=0;i<c2;i++,k++){
		  c[k]=b[i];
          }

	  c[k]='\0';

	  printf("concatinated string %s",c);

	

}


