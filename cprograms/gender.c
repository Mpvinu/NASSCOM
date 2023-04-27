#include<stdio.h>
int main(){

	char gender;

	int a;
	printf("enter the gender: ");
	scanf("%c",&gender);

	printf("enter the loan  amount: ");
	scanf("%d",&a);

	if(gender =='m'){
		if(a>700000)
			printf("not eligible");
		else if(a<250000)
			printf("not eligible");
		else
			printf("eligible");
			}
	else if(gender == 'f'){
		if(a>500000)
			printf("not eligible");
		else if(a<150000)
			printf("not eligible");
		else
			printf("eligible");

	
	}else

		printf("invalid gender");
}

		
	

	
