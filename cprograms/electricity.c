#include<stdio.h>
#include<string.h>

int main(){

	
	int custid,conu;
	float chg,gramt;
	char connm[25];

	printf("Input the customer id: ");
	scanf("%d",&custid);

	printf("Input the name of the customer: ");
	scanf("%s",connm);

	printf("enter the unit consumed by the customer: ");
	scanf("%d",&conu);

	if(conu<200){
	     chg = 1.20;}
	else if( conu<400){
	     chg = 1.50;}
	else if( conu<600){
		chg = 1.80;}
	else{
	       	chg = 2.00;}

	gramt = conu*chg;

	printf("Electricity Bill\n");
	printf("Customer Idno                      :%d\n",custid);
	printf("Customer Name                      :%s\n",connm);
	printf("Unit Consumed                      :%d\n",conu);
	printf("Amount Charges @RS. %4.2f per unit :%8.2f",chg,gramt);
}
		
