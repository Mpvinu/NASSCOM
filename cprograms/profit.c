#include<stdio.h>

int main(){

	int cp,sp,p;

	printf("enter the cost price and selling price:  ");
	scanf("%d%d",&cp,&sp);

	if(sp>cp){
		printf("profit is %d",sp-cp);}
	else if(cp>sp){
		printf("its a loss %d",sp-cp);}
	else {
		printf("nothing");}
}
