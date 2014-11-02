#include<stdio.h>
#define gc() getchar()
int main()
{
	int f=1,was1,was2;
	long int n,i,j,count=0,x,y;
	char ch;
	scanf("%ld",&n);
	gc();
	int a[n+5],comm[n+5];
	for(i=1;i<=n;i++)
	{
		a[i]=0;
		comm[i]=1;
	}
	while(f==1)
	{
		ch=gc();
		switch(ch)
		{
			case 'C':
						scanf("%ld %ld",&x,&y);
						gc();
						i=x;
						while(a[i]!=0)
						{
							i=a[i];
						}
						j=y;
						while(a[j]!=0)
						{
							j++;
						}
						a[i]=j;
						was1=was2=0;
						if(comm[j]%2==0)
							was1=1;
						if(comm[i]%2==0)
							was2=1;
						comm[j]+=comm[i];
						if(was1==0)
						{
							if(was2==0)
								count++;
							else
								count--;
						}
						else
						{
							count--;	
						}
						break;
			case 'Q':
						ch=gc();
						while(ch!='\n'&&ch!='\r')
						{
							ch=gc();
						}			
						
						printf("%ld\n",count);
						break;
			default:
						f=0;
		}
	}
	
}
