#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ans=INT_MAX;
        for(i=1;i<n;i++)
        {
            long long int x = a[i]^a[i-1];
            ans = min(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}