#include<stdio.h>
int fact(int a)
{
    int i,f=1;
    if(a==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            f=f*i;
        }
        return f;
    }
}
int main()
{
  int i,j,k=1,n;
  printf("\n Enter the number of lines to be printed:");
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%d\t",fact(i)/(fact(j)*fact(i-j)));
    }
    printf("\n");
  }
  return 0;
}
