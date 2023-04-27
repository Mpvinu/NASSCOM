#include<stdio.h>

int main(){
	int i,n,small;
	printf("enter the number of elements");
	scanf("%d",&n);
	int a[n];
        
   
    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
            small=a[0];
    for(i=0;i<n;i++){
	    if(a[i]<small)
		    small=a[i];
}

		 
	    
          

	   printf("smallest is  %d ",small);
	   

}
