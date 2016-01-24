#include<stdio.h>
int main()
{
	int number,bits=0,number1;
	printf("\n Enter a numberer: ");
	scanf("%d",&number);
	number1=number;
	while(number>0)
	{
		number/=2;
		bits++;
	}
	printf("\n The number of bits required to store %d is: %d",number1,bits);
	return 0;
}
