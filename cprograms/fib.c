#include<stdio.h>

int main(){

	int num1,num2,n,sum=0,i;
        printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);

	printf("enter number of terms");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		
		sum=num1+num2;
                printf("%d ",sum);
		num1=num2;
		num2=sum;
	}
}
