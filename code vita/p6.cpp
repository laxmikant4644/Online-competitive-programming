#include<stdio.h>
#define gc() getchar()
inline long int fastIO()
{
	long int val=0;
	char ch;
	ch=gc();
	while(ch==' '||ch=='\n'||ch=='\r')
		ch=gc();
	while(ch!=' '&&ch!='\n'&&ch!='\r')
	{
		val=val*10+ch-48;
		ch=gc();
	}
	return val;
}

int main()
{
	int n,i,j,k,l,c,d,rot=0,f;
	char q;
	long int s,x,y,z,temp1;
	scanf("%d",&n);
	int a[n+5][n+5],start[n+5][n+5],mat[n+5][n+5];
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			start[i][j]=a[i][j];
		}
	f=1;
	gc();
	while(f==1)
	{
		q=gc();
		switch(q)
		{
			case 'A':
						s=fastIO();
						temp1=s/90;
						if((temp1%4)>0)
						{
							for(i=0;i<(temp1%4);i++)
							{
								for(c=1;c<=n;c++)
								{
									for(d=1;d<=n;d++)
										mat[d][n-c+1]=a[c][d];
								}
							}
							
							for(i=1;i<=n;i++)
								for(j=1;j<=n;j++)
									a[i][j]=mat[i][j];
						}
						rot+=temp1;
						rot%=4;
						break;
			case 'Q':
						k=fastIO();
						l=fastIO();
						//scanf("%d %d",&k,&l);
						printf("%d\n",a[k][l]);
						break;
			case 'U':    
						x=fastIO();
						y=fastIO();
						z=fastIO();
						//scanf("%d %d %d",&x,&y,&z);
						if(rot>0)
						{
							for(i=0;i<rot;i++)
							{
								temp1=x;
								x=y;
								y=n-temp1+1;
							}
						}
						a[x][y]=z;	
						break;
			default:
						f=0;
						gc();			
		}
	}
	return 0;
}
