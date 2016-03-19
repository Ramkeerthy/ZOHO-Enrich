#include <stdio.h>
#include <stdlib.h>

struct mat
{
	int weight;
	int ID;
	int cost;
	int value;
	float ratio;
};
int main()
{
	int knap,var,i,j,temp1,x,y;
	int cknap,optcost=0;
	float temp2;
	printf("\nEnter the knapsack weight: ");
	scanf("%d",&knap);
	cknap=knap;
	printf("\nEnter different weights present: ");
	scanf("%d",&var);
	struct mat *ptr=(struct mat*)malloc(var*sizeof(struct mat));
	printf("\nEnter the details of the bar: ");
	for(i=0;i<var;i++)
	{
		printf("\nEnter the details of item %d: ",i+1);
		scanf("%d%d%d",&ptr[i].weight,&ptr[i].cost,&ptr[i].value);
		ptr[i].ID=i+1;
		ptr[i].ratio = (float)ptr[i].cost/ptr[i].weight;
	}
	for(i=0;i<var-1;i++)
	{
		for(j=1;j<var;j++)
		{
			if(ptr[i].ratio<ptr[j].ratio)
			{
				temp1 = ptr[i].ID;
				ptr[i].ID = ptr[j].ID;
				ptr[j].ID = temp1;
				temp1 = ptr[i].weight;
				ptr[i].weight = ptr[j].weight;
				ptr[j].weight = temp1;
				temp1 = ptr[i].value;
				ptr[i].value = ptr[j].value;
				ptr[j].value = temp1;
				temp2 = ptr[i].ratio;
				ptr[i].ratio = ptr[j].ratio;
				ptr[j].ratio = temp2;

			}
		}
	}
	printf("\nThe details are:\n");
	printf("ID\tWeight\tcost\tvalue\tratio\n");
	for(i=0;i<var;i++)
	{
		printf("%d\t%d\t%d\t%d\t%f\n",ptr[i].ID,ptr[i].weight,ptr[i].cost,ptr[i].value,ptr[i].ratio);
	}
	for(i=0;i<var;i++)
	{
		x=ptr[i].weight;
		y=ptr[i].value;
		if(ptr[i].weight>cknap)
		{
			continue;
		}
		else
		{
			while(cknap>=ptr[i].weight && ptr[i].value>0)
			{
				cknap -= ptr[i].weight;
				ptr[i].value--;
				optcost += ptr[i].cost;
			}
			printf("\nWeight added: %d\n Value added: %d\n",ptr[i].weight,y-ptr[i].value);
		}
	}
	printf("Optimized cost is: %d\n",optcost);
	
	return 0;
}
