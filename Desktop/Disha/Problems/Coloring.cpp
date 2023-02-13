#include <bits/stdc++.h>
using namespace std;
// Experiment1 ? Experiment2: Experiment3;
int main()  {
    int t;
    cin>>t;
    while(t--)  {
        long long n,k,m,r=0;
        cin>>n>>m>>k;
        bool flag = 0;
        vector<long long> v(m);
        long long x = n/k;
        long long y = n%k;
        for(long long i=0;i<m;i++){cin>>v[i];}
        for(long long i=0;i<m;i++)
        {if(v[i]>(x+1)){flag =1;break;}else if(v[i]>x){r++;}}
        if(r>y){flag =1;}
        if(flag){cout<<"No"<<endl;}else cout<<"Yes"<<endl;
        }
    
    return 0;
}