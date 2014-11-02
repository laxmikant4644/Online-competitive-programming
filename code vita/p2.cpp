#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int k,n,t,i,f,d,p;
	cin>>k;
	while(k--)
	{
		cin>>n>>t;
		long int e[n+5];
		for(i=0;i<n;i++)
			cin>>e[i];
		f=1;
		sort(e,e+n);
		cin>>p>>d;
		if(t<n)
		{
			cout<<"No\n";
			continue;
		}
		
		for(i=0;i<n;i++)
		{
			if(p<e[i])
			{
				f=0;
				break;
			}
			else
			{
				p+=(p-e[i]);
			}
		}
		if(f==0)
		{
			cout<<"No\n";
		}
		else
		{
			if(p>=d)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
	return 0;
}
