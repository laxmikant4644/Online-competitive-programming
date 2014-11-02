#include<stdio.h>
//#define gc() getchar()
int main()
{
	int t,broken[128],count,i;
	char bk[27],w[101];
	scanf("%d\n",&t);
	while(t--)
	{
		count=0;
		for(i=97;i<123;i++)
			broken[i]=0;
		/*
		ch=gc();
		while(ch!='\n')
		{
			broken[ch]=1;
			ch=gc();
		}
		
		ch=gc();
		while(ch!='\n')
		{
			if(broken[ch]==1)
			{
				count++;
				broken[ch]=0;
			}
			ch=gc();
		}
		*/
		
		scanf("%s",bk);
		scanf("%s",w);
		i=0;
		while(bk[i]!='\0')
			broken[bk[i++]]=1;
			
		i=0;
		while(w[i]!='\0')
		{
			if(broken[w[i]]==1)
			{
				count++;
				broken[w[i]]=0;
			}
			i++;
		}
		printf("%d\n",count);
	}
	return 0;
}
