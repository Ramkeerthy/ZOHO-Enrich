#include <stdio.h>
#include <stdlib.h>

int partycount=0;
struct poll
{
	char name[10];
	int vote;
};

int main()
{
	int n,i,vote1;
	int cast;
	printf("\n Enter the number of parties: ");
	scanf("%d",&n);
	struct poll *ptr=(struct poll*)malloc(n*sizeof(struct poll));	
	printf("\n Enter the party names... ");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the party %d name:",i+1);
		scanf("%s",ptr[i].name);
		ptr[i].vote=0;
		//printf("%s",ptr[i].name);
	}
	do
	{
		for(i=0;i<n;i++)
		{
			printf("%d   %s\n",i+1,ptr[i].name);	
		}
		printf("\nEnter the party to cast your vote:");
		scanf("%d",&vote1);
		ptr[vote1-1].vote+=1;
		printf("\nYour vote has been casted.");
		printf("\nEnter 1/0s to continue casting or not:\n ");
		scanf("%d",&cast);
	}while(cast==1);
	printf("party ID\tNAME\tVotes\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",i+1,ptr[i].name,ptr[i].vote);
	}
	return 0;
}
