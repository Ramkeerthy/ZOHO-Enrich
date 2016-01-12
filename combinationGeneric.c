/*Combination generator
    I/P: max number in combination, the numbers saperetly.
    O/P: The required possible combinations.
    
    This program works for all generic values
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    //Declaration of variables
    
    int n,i,j,comb,m,p;
    int *a,*elements;
    
    //Getting generic input from user
    
    printf("\n Enter the max numbers for the combination: ");
    scanf("%d",&n);
    elements = (int *) malloc (n * sizeof(int));
    a = (int *) malloc (n*sizeof(int));
    printf("\n Enter the elenents");
    for(i=0;i<n;i++)
    {
        scanf("%d",&elements[i]);
    }
    
    //Generating numbers ranging from 1 to 2^n
    
    for(comb=1;comb<pow(2,n);comb++)
    {
        m=comb;
        i=0;
        
        //Converting the number to binary equivalent
        
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
        
        //printing the combination
        
        while(j<n)
        {
            if(a[j]==1)
            printf("%d",elements[j]);
            j++;
        }
        printf("\n");
    }
}
