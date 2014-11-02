#include<stdio.h>

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int t,n,a[1005],i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("%d ",a[0]);
		for(i=1;i<n;i++)
			printf("%d ",a[i]*a[i-1]/gcd(a[i],a[i-1]));
		printf("%d\n",a[n-1]);
	}
	return 0;
}
