#include <bits/stdc++.h>
#define ll long long
using namespace std;
//different approach completely
//pairs brlow a and b this reduces tle
//divisor pair makes time complexity 1/3
int main(){
ll t;
cin>>t;
while(t--){
   ll a,b,c,d,g=0;
   cin>>a>>b>>c>>d;
   vector<pair<ll,ll>> v1,v2;
   for(ll i=1;i*i<=a;i++){if(a%i==0){v1.push_back({i,a/i});v1.push_back({a/i,i});}}
   for(ll i=1;i*i<=b;i++){if(b%i==0){v2.push_back({i,b/i});v2.push_back({b/i,i});}}
   for(ll i=0;i<v1.size();i++){
    for(ll j=0;j<v2.size();j++) {
        ll x=(v1[i].first*v2[j].first);
        ll y =(v1[i].second*v2[j].second);
        ll k1 = a/x+1;ll k2 = b/y+1;
        if(k1*x<=c&&k2*y<=d){cout<<k1*x<<" "<<k2*y<<endl;g++;break;}
    }
    if(g>0){break;}
   }
   if(g==0){cout<<"-1 -1"<<endl;} 
}
return 0;
}