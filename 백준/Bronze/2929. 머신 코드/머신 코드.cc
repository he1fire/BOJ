#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0, x=0;i<S.size();i++){
        if ('A'<=S[i] && S[i]<='Z'){
            if (x%4){
                ans+=4-x%4;
                x=0;
            }
        }
        x++;
    }
    cout << ans;
    return 0;
}