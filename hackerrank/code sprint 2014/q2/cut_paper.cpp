#include<stdio.h>
//#include<conio.h>
int count;

int fun(int n,int m)
{
	int min,temp;
	if(n==m)
	{
		//printf("inside1:%d %d\n",n,m);
		//getch();
		return 1;
	}
	else
	{
		if(n<m)
		{
			//printf("inside2:%d %d\n",n,m);
			min=1+fun(m-n,n);
			
			if(m%2==0)
			{
				temp=fun(m/2,n)*2;
			}
			else
			{
				temp=fun(m/2,n)+fun(m/2+1,n);
			}
		}
		else
		{
			//printf("inside3:%d %d\n",n,m);
			min=1+fun(n-m,m);
			
			if(n%2==0)
			{
				temp=fun(n/2,m)*2;
			}
			else
			{
				temp=fun(n/2,m)+fun(n/2+1,m);
			}
		}
		
		min=min<temp?min:temp;
		//printf("min(%d,%d)=%d\n",n,m,min);
		//getch();
		return min;
	}
}

int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		
		printf("%d\n",fun(n,m));
	}
	
	return 0;
}
