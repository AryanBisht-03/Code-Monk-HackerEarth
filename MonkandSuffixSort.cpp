#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,j;
    cin>>s>>n;
    vector <string> v;
	string temp=s;
    for(i=0;i<s.size();i++)
    {
        temp = s.substr(i);
		v.push_back(temp);
    }
   
    cout<<v[n-1]<<endl;
}