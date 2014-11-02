#include<bits/stdc++.h>
using namespace std;
#define gc() getchar()
int main()
{
	int t,n,z,i,j,k,f,l,count[130],count2[505][505];
	char arr[505][505],s[505],ch;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d\n",&n);
		for(i=0;i<=n;i++)
			for(j=97;j<123;j++)
				count2[i][j]=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				ch=gc();
				if(i>j)
					count2[i][ch]++;
				else
					count2[j][ch]++;
				gc();
			}
		}
		
		for(i=1;i<=n;i++)
		{
			for(j=97;j<123;j++)
				count2[i][j]+=count2[i-1][j];
		}
		scanf("%d\n",&z);
		for(i=0;i<z;i++)
		{
			for(j=97;j<123;j++)
				count[j]=0;
			scanf("%s",s);
			l=strlen(s);
			for(j=0;j<l;j++)
				count[s[j]]++;
			
			for(j=1;j<=n;j++)
			{
				f=1;
				
				for(k=0;k<l;k++)
				{
						if(count[s[k]]>count2[j][s[k]])
						{
							f=0;
							break;
						}
				}
				
				if(f==1){
					break;
				}
			}
			if(t==0&&i==(z-1))
				printf("%d %d",j,j);
			else
				printf("%d %d\n",j,j);
		}
	}
}
