#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,m,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long long int ans = -1;
		for(x=0;x<=m-1;x++)
		{
			if((x*x)%m==n)
			{
				ans = x;
				break;
			}
		}
		cout<<ans<<endl;
	}
}