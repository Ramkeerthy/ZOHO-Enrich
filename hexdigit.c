#include <stdio.h>
#include <string.h>

unsigned char toBin(char x)
{
	//if( ((int)x>=65 && (int)x<=71)  ||((int)x>=97 && (int)x<=103))
	//{
		//printf(" *%d* ",(int)x);
		switch(x)
		{
			case '0': return 0; break;
			case '1': return 1; break;
			case '2': return 2; break;
			case '3': return 3; break;
			case '4': return 4; break;
			case '5': return 5; break;
			case '6': return 6; break;
			case '7': return 7; break;
			case '8': return 8; break;
			case '9': return 9; break;

             case 'A': return 10; break;
             case 'B': return 11; break;
             case 'C': return 12; break;
             case 'D': return 13; break;
             case 'E': return 14; break;
             case 'F': return 15; break;
             case 'a': return 10; break;
             case 'b': return 11; break;
             case 'c': return 12; break;
             case 'd': return 13; break;
             case 'e': return 14; break;
             case 'f': return 15; break;
    	}
    //}
    
}

unsigned char* hexbyte(char *hexa, unsigned char a[])
{
	int i=0,j=0;
	while(*(hexa+i)!='\0')
	{
		//printf(" -%d- ",toBin(*(hexa+i)));
		a[j] = toBin(*(hexa+i));
	

		a[j] = a[j] << 4;
		//printf("%d",a[j]);
		//printf(" -%d- ",toBin(*(hexa+i+1)));
		a[j] += toBin(*(hexa+i+1));
		
		printf("%d ",a[j]);
		j++;
		i+=2;
		
	}	
	//printf("%d",strlen(hexa));
	return a;
}




int main()
{
	char hex[] = "A1BDEF6789454CEF";
	unsigned char *byte;
	int len,i;
	printf("%d  ",strlen(hex));
	len = strlen(hex);
	unsigned char a[8]={0,0,0,0,0,0,0,0};
	byte = hexbyte(hex, a);
	for(i=0;i<8;i++)
	{
	//	printf("%d  ", *(byte+i));
	}
	return 0;
}
