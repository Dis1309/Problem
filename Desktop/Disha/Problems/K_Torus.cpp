#include <bits/stdc++.h>
#define ll long long
using namespace std;
//check for pattern
int main(){
    ll n,x=0,r=INT_MAX;
    cin>>n;
    vector<vector<ll>> v( n,vector<ll> (n));
    for(ll i=0;i<n;i++){for(ll j=0;j<n;j++){cin>>v[i][j];x+=v[i][j];}}
    for(ll i=0;i<n;i++){r=min(v[i][n-1-i],r);}
    cout<<x-r<<endl;
     return 0;
    
    
}