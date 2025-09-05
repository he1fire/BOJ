#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M;
map<string, ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> N >> M;
    while (N--){
        string a;
        ll b;
        cin >> a >> b;
        m[a]=b;
    }
    while (M--){
        string a;
        cin >> a;
        T-=m[a];
    }
    cout << (T>=0 ? "acceptable" : "unacceptable");
    return 0;
}