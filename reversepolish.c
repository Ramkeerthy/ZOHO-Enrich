#include <stdio.h>
#include <string.h>
#include <ctype.h>
int top=0;
char stack[100];
int prio(char x)
{
	if(x=='+'||x=='-')
		return 2;
	else
		return 1;
}

void push(char a)
{
	stack[top++]=a;
}
char pop()
{
	return stack[--top];
}
int main()
{
	char a[100],b[100];
	int i, indexb=0,len;
	printf("Enter the expression: ");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<100;i++)
	{
		stack[i]=0;
	}
	for(i=0;i<len;i++)
	{
		if(isdigit(a[i]))
		{
			b[indexb++]=a[i];
		}
		else
		{
			switch (a[i])
			{
				case '(':
							push(a[i]);
							break;
				case ')':
							while(stack[top]!='(')
							{
								b[indexb++]=pop();
							}
							top--;
							break;
				case '+':
				case '-':
							
							//printf("%d %d",prio(stack[top-1]),prio(a[i]));
							if(prio(stack[top-1])<=prio(a[i]))
							{
								b[indexb++]=pop();
								push(a[i]);
								
							}
							else
							{
								push(a[i]);
							}
							break;
				case '*':
				case '/':
							push(a[i]);
							break;
			}
			
		}
	}
	
	while(top >= 0)
	{
		b[indexb++]=pop();
	}
	b[indexb] = '\0';
	//printf("%s\n ",stack);
	printf("%s\n ",b);
	return 0;
}
