#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
map<string,ll> m;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for (int i=0;i<N-1;i++){
        string s;
        cin >> s;
        m[s]--;
    } 
    for (auto x:m){
        if (x.second)
            cout << x.first;
    }
    return 0;
}