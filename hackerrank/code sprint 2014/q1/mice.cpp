#include<stdio.h>
#include<algorithm>
using namespace std;
long long int m[131073],h[131073],diff,temp;
int main()
{
	int t;
	long int n,i;
	long long int max;
	//long long int m[131073],h[131073],diff,temp,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&m[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&h[i]);
			
		sort(m,m+n);
		sort(h,h+n);
		
		diff=h[0]-m[0];
		max=diff<0?diff*(-1):diff;
		//printf("max=%lld\n",max);
		for(i=1;i<n;i++)
		{
			diff=h[i]-m[i];
			temp=diff<0?diff*(-1):diff;
			if(temp>max)
				max=temp;
		}
		printf("%lld\n",max);
	}
	return 0;
}
