#include<stdio.h>

int main()
{
	int n,i,j,top,r,x,y,left,right,up,down,f;
	scanf("%d",&n);
	int arr[n+5][n+5],rats[n+5][n+5],stack[n*n+2][2];
	char ch[3];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			rats[i][j]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%s",ch);
			if(ch[0]=='O')
				arr[i][j]=0;
			else
				arr[i][j]=-1;
		}
	}
	
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		scanf("%d %d",&x,&y);
		rats[x][y]=1;
	}
	f=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(rats[i][j]==1)
			{
				f=1;
				break;
			}
		}
		if(f==1)
			break;
	}
	top=0;
	stack[top][0]=i;
	stack[top][1]=j;
	arr[i][j]=1;
	while(top>-1)
	{
		i=stack[top][0];
		j=stack[top][1];
		top--;
		left=j-1;
		right=j+1;
		up=i-1;
		down=i+1;
		if(left>0&&arr[i][left]==0)
		{
			arr[i][left]=1;
			top++;
			stack[top][0]=i;
			stack[top][1]=left;
		}
		if(right<=n&&arr[i][right]==0)
		{
			arr[i][right]=1;
			top++;
			stack[top][0]=i;
			stack[top][1]=right;
		}
		if(up>0&&arr[up][j]==0)
		{
			arr[up][j]=1;
			top++;
			stack[top][0]=up;
			stack[top][1]=j;
		}
		if(down<=n&&arr[down][j]==0)
		{
			arr[down][j]=1;
			top++;
			stack[top][0]=down;
			stack[top][1]=j;
		}
	}
	
	/*
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",rats[i][j]);
		}
		printf("\n");
	}
	*/
	f=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(rats[i][j]==1)
			{
				if(arr[i][j]!=1)
				{
					f=0;
					break;
				}
			}
		}
	}
	if(f==1)
		printf("Yes");
	else
		printf("No");
	return 0;
}

/*
4
O O O O
X X O O
O X O O
O X O O
*/
