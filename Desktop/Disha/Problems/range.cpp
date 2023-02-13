#include <bits/stdc++.h>
#define ll long long
using namespace std;
//use set to reduce search area
//always intialise the value of itterator

ll digit(ll n){
    ll x=0;
 while(n>0){
  x+=n%10;
  n/=10;
 }
 return x;
}
 
int main(){
ll t;
cin>>t;
while(t--){
ll n ,q;
cin>>n>>q;
vector<ll> a(n);
set<ll> s;
for(ll i=0;i<n;i++){cin>>a[i];if(a[i]>9){s.insert(i);}}
 
for(ll i=0;i<q;i++){
ll b;
cin>>b;
if(b==1){
 ll l,r;
 cin>>l>>r;
 ll k =l-1;
 while(!s.empty()){
    auto it = s.lower_bound(k);
    ll z = *it;
    if(it==s.end()|| z >(r-1)){break;}
    a[*it]=digit(a[*it]);
    if(a[z]<=9){s.erase(it);}
    k=(z + 1);
 }
}
else if(b==2){ll k;cin>>k;cout<<a[k-1]<<endl;}
}

}
return 0;
}