#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,c,i,j,maxx,miny,tmp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map <int,int> m;
		for(i=0;i<n;i++)
		{
			cin>>c;
			m[c]++;
		}
		vector <long long int> v;
		for(auto it: m)
		{
			
			v.push_back(it.second);
		}
		maxx=1;
		miny=tmp=INT_MAX;
		j=n-1;
		c=n-1;
		for(i=0;i<v.size();i++)
		{
			//cout<<v[i]<<" ";
			if(i!=0&&maxx<v[i])
			{
				maxx=v[i];
				miny = min(miny,tmp);
				j=i;
				//cout<<" max changes ";
			}
			if(miny>v[i])
			{
				if(j>i)
				{
					miny=v[i];
					//cout<<" min  changes ";
				}	
				else
				{
					tmp = min(miny,v[i]);
					
				}
				
			}
		}
		
		//cout<<endl<<"max "<<maxx<<"miny "<<miny<<endl;
		if((maxx-miny)>0)
			cout<<maxx-miny<<endl;
		else
			cout<<-1<<endl;
	}
}