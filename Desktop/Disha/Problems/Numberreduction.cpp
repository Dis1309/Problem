#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> high(vector<ll> i){
    ll h= INT_MIN,m,k=i.size();
    if(i[k-2]==0){k=i.size()-2;}
    for(ll g=0;g<k;g++){h=max(h,i[g]);if(h==i[g])m=g;}
    i.erase(i.begin()+m);
    return i;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,k;
    cin>>x>>k;
    vector<ll> i;
    ll r =x;
    while(r>0){
        i.push_back(r%10);
        r/=10;
    }
    for(ll g =0;g<k;g++){i=high(i);}
    for(ll g=i.size()-1;g>=0;g--){cout<<i[g];}
    cout<<endl;  
}
  return 0;
}