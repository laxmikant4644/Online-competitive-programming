#include<bits/stdc++.h>
using namespace std;
#define gc() getchar()
char words[30001][501];
int main()
{
	int t,k,lb,ub,i,j,m,f,start,countBeta,countAlpha,ans=0;
	char ch;
	//char words[30000][500];
	ch=gc();
	i=j=0;
	while(ch!='\n'&&ch!='\r')
	{
		if(ch==' ')
		{
			words[j++][i]='\0';
			i=0;
		}
		else
		{
			if(ch!='!'&&ch!='.')
			{
				words[j][i++]=ch<97?(ch+32):ch;
			}
			else
			{
				words[j++][i]='\0';
				ch=gc();
				i=0;
				if(ch!=' ')
					continue;
				
			}
		}
		ch=gc();
	}
	t=j;
	
	
	scanf("%d %d %d\n",&k,&lb,&ub);
	int found[k+1];
	char alpha[k+1][505];
	for(i=0;i<k;i++)
	{
		ch=gc();
		j=0;
		while(ch!='\n'&&ch!='\r')
		{
			alpha[i][j++]=ch<97?(ch+32):ch;
			ch=gc();
		}
		alpha[i][j]='\0';
	}
	
	
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<k;j++)
			found[j]=0;
		countBeta=0;
		f=0;
		for(m=0;m<k;m++)
		{
			if(strcmp(words[i],alpha[m])==0)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			countAlpha=1;
			found[m]=1;
			start=m;
			for(j=i;j<t;j++)
			{
				f=0;
				for(m=0;m<k;m++)
				{
					if(strcmp(words[j],alpha[m])==0)
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					countBeta++;
					if(countBeta>ub)
					{
						break;
					}
				}
				else
				{
					if(found[m]==0)
					{
						countAlpha++;
					}
					
					if(m!=start)
					{
						if(countAlpha==k)
						{
							if(countBeta>=lb)
							{
								ans++;
								break;
							}
						}
					}
				}
			}
		}	
	}
	printf("%d",ans);
	return 0;
}
