#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int k,n,t,i,d,f;
	long int p;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %d",&n,&t);
		int e[n];
		for(i=0;i<n;i++)
			scanf("%d",&e[i]);
		sort(e,e+n);
		scanf("%ld %d",&p,&d);
		if(t<n)
		{
			printf("No\n");
			continue;
		}
		f=1;
		for(i=0;i<n;i++)
		{
			if(p<e[i])
			{
				f=0;
				break;
			}
			else
			{
				p+=(p-e[i]);
			}
		}
		
		if(f==1)
		{
			if(p>=d)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
