#include<stdio.h>

int main(){
	int a[5],i,sum=0;
        float avg;
   
    for(i=0;i<5;i++)
	    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
	    sum=sum+a[i];
           avg=sum/5.0;

	   printf("\n total marks %d",sum);
	   printf("\n average marks %4.2f",avg);

}
