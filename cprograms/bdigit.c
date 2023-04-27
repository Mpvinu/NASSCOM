#include<stdio.h>

int main(){

	int n,digit,max=0;
	printf("enter a number");
	scanf("%d",&n);

	while(n>0){

		digit=n%10;
		if(digit>max)
			max=digit;
		  n=n/10;

	}
   printf("biggest digit is %d",max);
}


	
