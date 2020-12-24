#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j;
    queue <pair <int,int> > q;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>j;
        q.push({j,i+1});
    }
    j=x;
    while(j--)
    {
        int size = q.size();
        vector <pair <int,int> > v;
        for(i=0;i<x&&i<size;i++)
        {
            v.push_back(q.front());
            q.pop();
        }
        int max = INT_MIN,pos;
        for(auto it: v)
        {
            if(max<it.first)
            {
                max = it.first;
                pos=it.second;
            }
        }
        auto it = find(v.begin(),v.end(),make_pair(max,pos));
        v.erase(it);
        for(auto it:v)
        {
			it.first-=1;
            if(it.first<0)
                it.first=0;
            q.push(it);
        }
        cout<<pos<<" ";
    }
    return 0;
}