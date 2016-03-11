
#include <stdio.h>
#include <string.h>

struct student
{
  int roll;
  char name[25];
};
int main(void) 
{
	// your code goes here
    int max=1;
    struct student s[max];
    struct student s1[max];
    int r,i,j,k,n;
    char a[25];
    
    for(i=0; i<max; i++)
    {
        scanf("%d",&s[i].roll);
    }
    printf("***");
    for(i=0; i<max; i++)
    { 
        gets(s[i].name);
    }
    for(i=0; i<max; i++)
    {
        r=s[i].roll;
        s1[i].roll = s[i].roll;
        strcpy(a,s[i].name);
        for(j=0; j<strlen(s[i].name);j++)
        {
            if(a[j]=='.' || a[j]==' ')
            {
                break;
            }
        }
        n = j;
        k=0;
        for(j=n; (s[i].name[j]!='.' || s[i].name[j]!=' ') ; j++)
        {
            s1[i].name[k++]=s[i].name[j];
        }
        s1[i].name[k]='\0';
        printf("%s",s1[i].name);
    }
	return 0;
}

