#include<stdio.h>
int strToInt(char *x)
{
    
}
int main()
{
    char date[10];
    int d=0,m=0,y=0,i=0,flag=0;
    printf("Enter the date in specified format DD/MM/YYYY: ");
    scanf("%s",date);
    while(date[i]!='/')
    {
        //printf("%d ",date[i]);
        d=d*10+((int)date[i]-48);
        i++;
    }
    i++;
    while(date[i]!='/')
    {
        m=m*10+((int)date[i]-48);
        i++;
    }
    i++;
    while(date[i]!='\0')
    {
        y=y*10+((int)date[i]-48);
        i++;
    }
    printf("%d %d %d",d,m,y);
    
    //Date Validation
    if((y<=1) && (y>=10000))
    {
        if((m<=12) && (m>=1))
        {
            switch(m)
            {
                case 1:
                        if(d!=31)
                            flag++;
                case 2:
                        if(d!=28)
                        {
                            if(y%4==0&&d==29)
                            {
                                if((y%100!=0)&&(y%400==0))
                                {
                                    flag++;
                                    break;
                                }
                            }
                            flag++;
                        }
                case 3:
                        if(d!=31)
                            flag++;
                case 4:
                        if(d!=30)
                            flag++;
                case 5:
                        if(d!=31)
                            flag++;
                case 6:
                        if(d!=30)
                            flag++;
                case 7:
                        if(d!=31)
                            flag++;
                case 8:
                        if(d!=31)
                            flag++;
                case 9:
                        if(d!=30)
                            flag++;
                case 10:
                        if(d!=31)
                            flag++;
                case 11:
                        if(d!=30)
                            flag++;
                case 12:
                        if(d!=31)
                            flag++;
                
            }
        }
    }
    if(flag==0)
    {
        printf("Valid date... ");
    }
    else
    {
        printf("Invalid date...");
    }
    return 0;
}
