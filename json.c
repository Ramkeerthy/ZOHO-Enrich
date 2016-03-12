#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[25];
}s1={1001,"Ram"};

void toString(struct student s,char *c)
{
	int i,j=0,l,m;
	char y[5],temp;
	char x[100];
	char a[] = "{\"id\":";
	strcat(x,a);
	sprintf(y, "%d", s1.id);
   
	strcat(x,y);
	//a[strlen-1] = ",";
	strcat(x,",\"name\":\"");
	strcat(x,s.name);

	strcat(x,"\"}");
	//for(i=0;i<strlen(s)-1;i++)
	//{
	//	c[i]=a[i];
	//}
	puts(x);
	//return c;
}

int main()
{
	char b[50];
	int i;
	for(i=0;i<50;i++)
		b[i]='\0';
	toString(s1,b);
	//puts(b);

	return 0;
}
