#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,c,j;
	cin>>t;
	string s[t];
	for(i=0;i<t;i++)
	{
		cin>>s[i];
		c=0;
		for(j=0;j<i;j++)
		{
			if(s[j]<s[i])
				c++;
		}
		cout<<c<<endl;
	}
}