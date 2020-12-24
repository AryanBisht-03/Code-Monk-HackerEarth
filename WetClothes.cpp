#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,g,i,j;
	cin>>n>>m>>g;
	int c=0;
	int t[n];
	vector <pair <int,bool> > v;
	for(i=0;i<n;i++)
	{
		cin>>t[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>j;
		v.push_back({j,true});
	}
    bool gone;

	for(i=1;i<n;i++)
	{
        gone = false;
        int tmp = t[i]-t[i-1];
	
		for(j=0;j<m;j++)
		{
			if(v[j].second&&v[j].first<=tmp)
			{
				v[j].second=false;
				c++;
				
            }
		}
	}

	cout<<c<<endl;
	return 0;
}