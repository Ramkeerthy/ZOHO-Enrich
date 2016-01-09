#include<stdio.h>
void swap(int* x, int* y) 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void oddEven(int num) 
{
	int val = 1;
	int bfr = 2;
	int i, j;
	for (i = 1; i <= num; i++) 
	{
		for (j = 1; j <= i; j++) 
		{
			printf("%d ", val);
			val += 2;
		}
		swap(&val, &bfr);
		printf("\n");
	}
}
int main()
{
    int n;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    oddEven(n);
    return 0;
}
