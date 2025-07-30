#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
set<string> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        s.insert(a);
    }
    for (int j=0;j<M;j++){
        string a;
        cin >> a;
        if (s.find(a)!=s.end())
            ans++;
    }
    cout << ans;
    return 0;
}