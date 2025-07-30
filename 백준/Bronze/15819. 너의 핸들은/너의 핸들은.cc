#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    vector<string> v;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    cout << v[M-1];
    return 0;
}