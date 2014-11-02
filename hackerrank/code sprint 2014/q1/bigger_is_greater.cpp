#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	long int t;
	int i,j,k,l,f,max,p,q;
	char w[101],arr[101];
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%s",w);
		f=k=0;
		l=strlen(w);
		
		max=l-1;
		p=-1;
		while(max>0)
		{
			for(i=max;i>p;i--)
			{
				if(w[i]<w[max])
				{
					//printf("i=%d max=%d\n",i,max);
					q=max;
					p=i;
					f=1;
					break;
				}
			}
			if((q-p)<2)
				break;
			max--;
		}
		
		if(f==0)
		{
			printf("no answer\n");
		}
		else
		{
			//printf("i=%d max=%d\n",i,max);
			for(j=p;j<q;j++)
				arr[k++]=w[j];
			for(j=q+1;j<l;j++)
				arr[k++]=w[j];
			arr[k]='\0';
			//printf("before sort arr=%s\n",arr);
			sort(arr,arr+k);
			//printf("before sort arr=%s\n",arr);
			for(j=0;j<p;j++)
				printf("%c",w[j]);
			printf("%c",w[q]);
			printf("%s",arr);
			printf("\n");
		}
	}
	return 0;
}
