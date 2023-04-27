#include<stdio.h>
int main(){

	char a[20],b[20];
          int i,c=0,k=0;
	printf("enter a string");
	scanf("%s",a);


	while(a[c]!='\0')
         c++;
	for(i=0;i<c;i++)
	{

		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
	                   b[k]=a[i];
                           k++;
                           a[i]=' ';			   
		}
              
	}
	i=0;
	while(a[i]!='\0'){

		if(a[i]!=' '){
			b[k]=a[i];
			k++;
		}
		i++;
	} b[i]='\0';
	printf("%s",b);
		
}
