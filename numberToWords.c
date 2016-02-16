#include<stdio.h>

char *num_ones[] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
char *num_tens1[] = {"ten", "eleven", "twelve", "thirteen", "fourteen","fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *num_tens2[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};

void ones(int n1)
{
	printf("%s ",num_ones[n1]);
}
void tens(int n2)
{
	int b;

		if(n2<10 && n2>0)
		{
			ones(n2%10);
		}
		else if((n2>9) && (n2<20))
		{
			printf("and %s ",num_tens1[n2-10]);
		}
		else if(n2>=20)
		{
			b = n2/10;
			printf("and %s ",num_tens2[b]);
			if(n2%10!=0)
				ones(n2%10);
		}

}
void hundreds(int n3)
{
	int a;
	a = n3/100;
	if(a!=0)
	{
		printf("%s hundred ",num_ones[a]);
	}
	tens(n3%100);
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	hundreds(n);
	return 0;
}
