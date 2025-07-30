#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v, chk;
ll N, M;
int main(){
    cin >> N;
    for (ll i=0;i<N+M;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    chk=v;
    sort(chk.begin(),chk.end());
    if (chk==v)
        cout << "-1";
    else{
        prev_permutation(v.begin(),v.end());
        for (auto i:v)
            cout << i << " ";
    }
    return 0;
}