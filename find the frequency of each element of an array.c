#include<stdio.h>
#define n 8
void frequencyElements();
int main()
{
	int array[n],duplicate[n],i;
	printf("Enter the elements in the array :-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		duplicate[i]=-1;
	}
	frequencyElements(array,duplicate);
	return 0;
}
void frequencyElements(int *array,int *duplicate)
{
	int i,j,count;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
			{
				count++;
				duplicate[j]=0;
			}
		}
		if(duplicate[i]!=0)
		{
			duplicate[i]=count;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(duplicate[i]!=0)
		{
			printf("%d came %d times\n",array[i],duplicate[i]);
		}
	}
}
