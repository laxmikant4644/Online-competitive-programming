#include<stdio.h>

int main()
{
	int t;
	long long int i,sum,p;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld",&p);
		for(i=0;;i++)
		{
			sum+=i;
			if(p<sum)
			{
				printf("%lld\n",i-1);
				break;
			}
		}
	}
	return 0;
}
