#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,comb,m,p;
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
    for(comb=1;comb<pow(2,n);comb++)
    {
        m=comb;
        i=0;
        while(m>0)
        {
            a[i]=m%2;
            m/=2;
            i++;
        }
        while(i<n)
        {
            a[i]=0;
            i++;
        }
        j=0;
        while(j<n)
        {
            if(a[j]==1)
            printf("%d",elements[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}
