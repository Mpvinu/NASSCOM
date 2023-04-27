#include<stdio.h>

int main(){

	int i,j,num,sum=0;

	

        for(i=1;i<=1000;i++){
		sum=0;
		num=i;
         for(j=1;j<num;j++){
		if(num%j==0){
	           sum=sum+j;

	}
	}
	if(sum==num){
		printf("%d ",num);
	            }
	
	}
	
}

