#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
set<ll> s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    s.insert(1);
    for (int i=2;i<10;i++){
        for (int j=1;j<10;j++){
            s.insert(i*j);
        }
    }
    cout << (s.find(N)!=s.end());
    return 0;
}