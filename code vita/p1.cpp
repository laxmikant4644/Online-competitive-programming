#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t,a[27],i,f,l;
	char s[405];
	scanf("%d",&t);
	while(t--)
	{
		for(i=1;i<27;i++)
			a[i]=0;
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++){
			a[s[i]-96]++;
		}
		f=1;
		for(i=1;i<27;i++)
		{
			if(a[i]>0)
			if(a[i]!=i)
			{
				f=0;
				break;
			}
		}
		if(f==0)
			printf("No");
		else
			printf("Yes");
		if(t>0)
			printf("\n");
	}
	return 0;
}
