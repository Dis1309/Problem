#include <bits/stdc++.h>
using namespace std;
// 1<<k means 1*pow(2,k) and 1>>k means 1/pow(2,k)
int main() {
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long k = count(s.begin(),s.end(),'1');
    for(long long x = 1<<k; x<=((1<<n)-(1<<(n-k)))+1;x++){cout<<x<<" ";}
    return 0;
}