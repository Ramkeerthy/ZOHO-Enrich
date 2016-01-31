/*  The accuracy of the root is left to the user choice...
    I used a guess variable for this programe referd from https://www.deltacollege.edu/dept/basicmath/Babylonian.html
*/
#include<stdio.h>
float sqrRoot(float num, int decimal)
{
	int i;
	float guess,gen=0;
	float accuracy=1;
	guess = num;
	for(i=0;i<=decimal;i++)
	{
		accuracy/=(float)10;
	}
	while((guess - gen) > accuracy)
	{
		guess = (guess+gen)/2;
		gen = num/guess;
	}
	return guess;
}

int main()
{
	float number,root;
	int acuCor;
	printf("\nEnter the number for which the square root to be found: ");
	scanf("%f",&number);
	printf("\nEnter the decimal correction in the square root: ");
	scanf("%d",&acuCor);
	root = sqrRoot(number,acuCor);
	printf("\n The square root of the number %f is: %f",number,root);
	return 0;
}
