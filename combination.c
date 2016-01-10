#include <stdio.h>
int main()
{
        int a[]={1,2,3},i,j;
        for(i=0;i<3;i++)
        printf("%d\n",a[i]);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i<j)
                printf("%d%d\n",a[i],a[j]);
            }
        }
        for(i=0;i<3;i++)
        {
            printf("%d",a[i]);
        }
        return 0;
}
