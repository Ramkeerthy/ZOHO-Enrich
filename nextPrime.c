/*  printing nextPrime number for a given prime number...
    Using square root reduces the loop execution...
*/
#include<stdio.h>
#include<math.h>
int nextPrime(int num)
{
	int flag,num1,j,prime=0;
	num1=num+1;
	float root;
	root = (int)sqrt(num)+1;
	while(prime==0)
	{
		flag=0;
		for(j=2;j<=root;j++)
		{
			if(num1%j==0)
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			prime++;
		}
		num1++;
	}
	return (num1-1);
}
int main()
{
	int number,next;
	printf("\nEnter a number: ");
	scanf("%d",&number);
	next = nextPrime(number);
	printf("\nThe next prime number is: %d",next);
	return 0;
}
