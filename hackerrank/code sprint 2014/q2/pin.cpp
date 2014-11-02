#include<stdio.h>

long int gcd(long int a,long int b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	long int t,n,m,i,count,lcm,a;
	scanf("%ld",&t);
	while(t--)
	{
		count=0;
		scanf("%ld %ld",&n,&m);
		scanf("%ld",&lcm);
		for(i=1;i<m;i++)
		{
			scanf("%ld",&a);
			lcm=lcm/gcd(lcm,a)*a;
			//printf("inside lcm=%ld\n",lcm);
		}
		
		//printf("lcm=%ld\n",lcm);
		printf("%ld\n",n/lcm);
	}
	
	return 0;
}
