#include <bits/stdc++.h>
#define ll long long
using namespace std;
string x, S;
ll ans, now;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> S;
    for (int i=0;i<S.size();i++){
        if (x[now]==S[i])
            now++;
        if (now>=x.size()){
            ans++;
            now=0;
        }
    }
    cout << ans;
    return 0;
}