#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		k = k%n;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=n-k;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		for(i=0;i<n-k;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}