/* Magic square...
   this program prints the magic square of order 5.
   I tried to use dynamic memory allocation and its throwing me error message, i am trying to debug it
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=5,a[5][5],num=1,i,j;

	//Initializing the array element to avoid printing of garbage value
	
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	      a[i][j]=0;
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
		if(a[i][j]!=0)
		{
			j=j-2;
			i=i+1;
			continue;
		}
		else
		{
			a[i][j]=num++;
		}
		i=i-1;
		j=j+1;
	}
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
      	{
    	   printf("%d\t",a[i][j]);
      	}
      	printf("\n");
    }
	return 0;
}
