#include<stdio.h>

int main()
{
	int n,num,count1=0,count2=0,count3=0,count;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		if((num&(num-1))==0)
			count1++;
		else
		{
			for(count=0;num;num>>=1)
				count+=num&1;
			if(count>2)
				count3++;
			else
				count2++;
		}
	}
	
	
	//printf("count1=%d count2=%d count3=%d\n",count1,count2,count3);
	
	if((count1==1)&&(count2==1)&&(count3==1))
	{
		printf("The other player :(");
		return 0;
	}
		
	if(count1>1)
	{
		if(count2>1)
		{
			if(count3>1)
			{
				if((count1==count2)&&(count1==count3))
				{
					printf("The other player :(");
					return 0;
				}
			}
			else
			{
				if(count3==0)
				{
					if(count1==count2)
					{
						printf("The other player :(");
						return 0;
					}
				}
			}
		}
		else
		{
			if((count2==0)&&(count3>1))
			{
				if(count1==count3)
				{
					printf("The other player :(");
					return 0;
				}
			}
		}
	}
	else
	{
		if(count1==0)
		{
			if((count2>1)&&(count3>1))
			{
				if(count2==count3)
				{
					printf("The other player :(");
					return 0;
				}
			}
		}
	}
	
	if((count1>1)&&((count2+count3)==0))
	{
		if((count1%2)==0)
		{
			printf("The other player :(");
			return 0;
		}
	}
	
	if((count2>1)&&((count1+count3)==0))
	{
		if((count2%2)==0)
		{
			printf("The other player :(");
			return 0;
		}
	}
	
	if((count3>1)&&((count2+count1)==0))
	{
		if((count3%2)==0)
		{
			printf("The other player :(");
			return 0;
		}
	}
	
	printf("Shaka :)");
	return 0;
}
