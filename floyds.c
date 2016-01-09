
#include<stdio.h>
int main()
{
  int i,j,k=1,n;
  printf("\n Enter the number of lines to be printed:");
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d\t",k++);
    }
    printf("\n");
  }
  return 0;
}
