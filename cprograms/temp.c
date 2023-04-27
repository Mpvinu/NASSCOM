#include<stdio.h>
int main(){

	int temp;

	printf("enter the temperature: ");
	scanf("%d",&temp);

	if(temp>0,temp<11){
		printf("very cold");}
	else if(temp>11,temp<26) {printf("cold");}
	else if(temp>26,temp<33){printf("hot");}
	else if(temp>32,temp<45){printf("very hot");}
	else {printf("extremely hot");}
	
}

