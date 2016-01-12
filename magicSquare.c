/*  Magic square...
    I have used dynamic memory allocation to ensure that my code is generic.
    This magic square code only works for odd orders only.
    
    INPUT range: 3-10^5
    OUTPUT: Prints the Magic square of given order.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,num=1,i,j;
	int *a;
	printf("\nEnter the order of magic square: ");
	scanf("%d",&n);
	if(n%2!=0)
	{
	    a = (int *) malloc(n*n*(sizeof(int)));
	    //Initializing the array element to avoid printing of garbage value
	
    	for(i=0;i<n;i++)
	    {
	       for(j=0;j<n;j++)
	       {
	          *(a+(i*n)+j)=0;
	       }
    	}
	
    	//Initial position of the magic sqr
	
	    i = n/2;
    	j = n-1;
	
    	//Looping the routine till n*n iterations
	
	    while(num<=(n*n))
	    {
		
	    	//If index of row is -1 and column is n
		
	    	if(i==-1 && j==n)
	    	{
	    		j=j-2;
	    		i=0;
	    	}
	    	else
	    	{
	    		if(j==n)
	    		{
	    			j=j%n;
	    		}
	    		if(i<0)
	    		{
	    			i=(i+n)%n;
	    		}
	    	}
	    	if(*(a+(i*n)+j)!=0)
	    	{
	    		j=j-2;
	    		i=i+1;
	    		continue;
	    	}
	    	else
	    	{
	    		*(a+(i*n)+j)=num++;
	    	}
	    	i=i-1;
	    	j=j+1;
    	}
      	for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
      	    {
        	   printf("%d\t",*(a+(i*n)+j));
      	    }
        	printf("\n");
        }
	}
	else
	    printf("\n Magic Square workes for only odd degree.");
    return 0;
}
