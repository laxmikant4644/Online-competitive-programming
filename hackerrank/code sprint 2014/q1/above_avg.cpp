#include<stdio.h>

int main()
{
	int t,n,s[100],count,i,avg;
	long int sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
			sum+=s[i];
		}
		avg=sum/n;
		for(i=0;i<n;i++)
			if(s[i]>avg)
				count++;
				
		printf("%d\n",count);
	}
	return 0;
}
