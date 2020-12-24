#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,i,j,x,c;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>j>>x;
		c=0;
		if(j==0)
		{
			auto it = lower_bound(a,a+n,x);
           
            if((it-a)==n&&x!=a[n-1])
                c=0;
            else
                c = n - (it-a) ;
		}
		else
		{
            auto it = upper_bound(a,a+n,x);
            c = n - (it-a);
            
		}
		cout<<c<<endl;
	}
	return 0;
}