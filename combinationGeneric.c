#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,comb;
    int *a,*elements;
    printf("\n Enter the max numbers for the combination: ");
    scanf("%d",&n);
    elements = (int *) malloc (n * sizeof(int));
    a = (int *) malloc (n*sizeof(int));
    printf("\n Enter the elenents");
    for(i=0;i<n;i++)
    {
        scanf("%d",&elements[i]);
    }
    for(comb=1;comb<(int)pow(2,n);comb++)
    {
        i=0;
        p=comb;
        while(comb>1)
        {
            a[i]=comb%2;
            i++;
            comb/=2;
        }
        if(p%2!=1)
        {
            a[i]=1;
            i++;
        }
        while(i<n)
        {
            a[i]=0;
            i++;
        }
		for(i=0;i<n;i++)
		printf("%d",a[i]);
        /*for(i=0;i<n;i++)
        {
            if(*(a+i)!=0)
            {
                printf("%d",elements[i]);
            }
        }*/
        printf("\n");
    }
    return 0;
}

