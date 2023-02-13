#include <bits/stdc++.h>
#define ll long long
using namespace std;
//check for k where range is (k,n-k-1)
int main(){
    ll t;
    cin>>t;
    while(t--){

        
        ll n,j;
        cin>>n;
        vector<ll> a(n+1);
        for(ll i=0;i<n;i++){cin>>j;a[j]=i;}
        ll p1 =(n+1)/2;
        ll p2 =(n+2)/2;
        while(p1>0&&(p1==p2||(a[p1]<a[p1+1]&&a[p2-1]<a[p2]))){
            p1--;
            p2++;
        }
        cout<<(n-p2+p1+1)/2<<endl;
        
    }
    return 0;
}
