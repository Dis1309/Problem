#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--)  {
    ll k;
    string x;
    cin>>x>>k;
    vector<vector<ll>> v;
    for(ll i=0;i<x.length();i++){v[x[i]-'0']={i};}
    for(ll i=0;i<10;i++){reverse(v[i].begin(),v[i].end());}
    string o;
    ll s=0,l=(x.length()-k);
    for(ll i=0;i<l;i++) {
      for(ll d=(i==0);d<=9;d++){
        while(!v[d].empty() && v[d].back()<s) v[d].pop_back();
        if(!v[d].empty() && v[d].back()-s<=k) {
          o += d +'0';
          k -= v[d].back()-s;
          s = v[d].back()+1;
          break;
        }
      }
    }
    cout<<o<<endl;
  }
  return 0;
}