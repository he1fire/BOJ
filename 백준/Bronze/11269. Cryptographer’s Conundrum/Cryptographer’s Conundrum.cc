#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, x="PER";
ll ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]!=x[i%3])
            ans++;
    }
    cout << ans;
    return 0;
}