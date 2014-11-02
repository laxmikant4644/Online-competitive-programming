#include <stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int t,f;
    long int n,i,j,count,sq;
    scanf("%d",&t);
    while(t--)
    {
    	count=1;
    	scanf("%ld",&n);
    	for(i=2;i<n;i++)
    	{
    		f=0;
    		for(j=2;j<=i;j++)
    		{
    			if(i%j==0)
    			{
    				if(n%j==0)
    				{
    					f=1;
    					break;
    				}
    			}
    		}
    		if(f==0)
    			count++;
    	}
    	printf("%ld\n",count);
    }
    return 0;
}

