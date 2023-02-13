#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll c,d,n,k=-1,s=0,j=0;
    ll t =d;
    cin>>n>>c>>d;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){cin>>v[i];}
    sort(v.begin(),v.end(),greater<ll>());//use of function
    ll p1 = 0;
    ll p2 = d+2;
    while(p1<p2){
      ll m = p1 + (p2-p1+1)/2,o=0;//check the condition 
      for(ll i=0;i<d;i++){
        if((i%m)<n){ o+=v[i%m];}
      }
      if(o>=c){p1=m;}else  p2=m-1;
    }
    if(p1==0){
      cout<<"Impossible"<<endl;}else 
    if (p1==d+2){cout<<"Infinity"<<endl;}
    else cout<<p1-1<<endl;
}
    return 0;
}
