#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        char c;
        cin >> c;
        if (c=='1')
            ans++;
    }
    cout << ans;
    return 0;
}