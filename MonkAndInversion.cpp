#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,x,y,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		c=0;

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(x=i;x>=0;x--)
				{
					for(y=j;y>=0;y--)
					{
						if(a[x][y]>a[i][j])
							c++;
					}
				}
			}
		}
		cout<<c<<endl;
	}
}