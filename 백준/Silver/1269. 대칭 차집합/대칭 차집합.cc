#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, cnt;
set<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        s.insert(a);
    }
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        if (s.find(a)!=s.end())
            cnt++;
    }
    cout << N+M-(2*cnt);
    return 0;
}