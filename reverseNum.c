#include<stdio.h>
int reverseNum(int n)
{
	int rev = 0;
	while(n>0)
	{
		rev = (rev * 10) + (n%10);
		n/=10;
	}
	return rev;
}
int main()
{
	int num,reverse;
	printf("\n Enter a number to be reversed: ");
	scanf("%d",&num);
	reverse = reverseNum(num);
	printf("\n The reverse of the number %d is: %d",num,reverse);
	return 0;
}
