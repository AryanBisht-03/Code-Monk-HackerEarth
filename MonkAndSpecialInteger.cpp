//Not done by me....


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, x;cin>>n>>x;
  ll a[100100]={0};
  ll flag=1;
  for(ll i=1; i<=n; i++){
    cin>>a[i];
    if(a[i] > x)
      flag = 0;
    a[i]+=a[i-1];
  }
  if(!flag){
    cout<<"-1\n";
    return 0;
  }
  ll left = 1, right = n;
  ll ans = -1;
  while(left <= right){
    ll mid = (left+right)/2;
    ll flag = 1;
    for(ll i=mid; i<=n; i++){
      if(a[i]-a[i-mid] > x){
        flag = 0;
        break;
      }
    }
    if(flag){
      left = mid+1;
      ans = mid;
    }
    else{
      right = mid-1;
    }
  }
  cout<<ans<<endl;
  return 0;
}