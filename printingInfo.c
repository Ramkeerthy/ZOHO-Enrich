#include<stdio.h>
#include<unistd.h>
int main()
{
	char info[] = {"HAPPY PONGAL"};
	int i=0;
	while(info[i]!="\0")
	{
		printf("%c",info[i++]);
		sleep(1);
	}
	return 0;
}
