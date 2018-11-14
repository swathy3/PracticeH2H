#include <stdio.h>

int main(void) {

	 int i,num1,num2,lolim,ulim,count=0;
	scanf("%d %d", &num1,&num2);  
	if(num1>num2)
	{
	    lolim=num2;
	    ulim=num1;
	}
	else
	{
	    lolim=num1;
	    ulim=num2;
	}
	for(i=1;i<=(lolim/2);i++)
	{
	    if((num1%i==0)&&(num2%i==0))
	    {
	        count=count+1;
	        
	    }
	}
	if(ulim%lolim==0)
	    count=count+1;
	
	printf("%d",count);


	return 0;
}

