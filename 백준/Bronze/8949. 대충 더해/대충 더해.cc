#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (N!=0 || M!=0){
        ll x=N%10+M%10;
        if (N)
            N/=10;
        if (M)
            M/=10;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for (auto i:v)
        cout << i;
    return 0;
}