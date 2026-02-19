#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        char c;
        ll x;
        cin >> c >> x;
        if (c=='+')
            N+=x;
        else
            N-=x;
    }
    cout << N;
    return 0;
}