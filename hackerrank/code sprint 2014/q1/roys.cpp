#include<stdio.h>

int main()
{
	long long int t,x,y,x1,y1,x2,y2,temp,min;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld %lld %lld",&x,&y,&x1,&y1,&x2,&y2);
		
		min=x-x1;
		temp=x2-x;
		if(temp<min)
			min=temp;
		temp=y-y1;
		if(temp<min)
			min=temp;
		temp=y2-y;
		if(temp<min)
			min=temp;
		
		printf("%lld\n",min);
	}
	return 0;
}
