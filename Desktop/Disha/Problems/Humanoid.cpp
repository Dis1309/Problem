#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> a(n+1);
// if exp1 is true exp2 is implemented 
//  else if it false exp3 is implememented
ll solve(ll i, ll h, ll g, ll b){
    
    if(i==n){return 0;}
    
    if(a[i]<h){return solve(i+1,h+(a[i]/2),g,b)+ 1;}
    ll ans1 = (g ? solve(i++,h*2,g-1,b): 0);
    ll ans2 = (b ? solve(i++,h*3,g,b-1): 0);
    return max(ans1,ans2);
}
//dp is used, the recurssion pattern has to be noticed here
int main(){
    ll t;
    cin>>t;
    while(t--) {
       ll h;
       cin>>n>>h;
       for(ll i=0;i<n;i++){cin>>a[i];}
       sort(a.begin(),a.end());
       cout<<solve(0,h,2,1)<<endl;
    }
    return 0;
}