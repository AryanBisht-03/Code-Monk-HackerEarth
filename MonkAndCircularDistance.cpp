#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,i,c;
    unsigned long long int j;
    cin>>n;
    long long int x[n],y[n];
    vector <long double> v;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        v.push_back(sqrt(x[i]*x[i]+y[i]*y[i]));
    }
    sort(v.begin(),v.end());
    cin>>q;
    while(q--)
    {
        cin>>j;
        auto it = upper_bound(v.begin(),v.end(),j);
        cout<<it-v.begin()<<endl;
    }
    return 0;
}