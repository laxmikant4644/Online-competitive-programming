#include<stdio.h>

int main()
{
	int t,ans[5]={0,1,0,1,1},n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(ans[n%5]==0)
			printf("No");
		else
			printf("Yes");
		if(t>0)
			printf("\n");
	}
}
