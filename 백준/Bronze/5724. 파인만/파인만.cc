#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll N, ans=0;
        cin >> N;
        if (N==0)
            break;
        while (N){
            ans+=pow(N,2);
            N--;
        }
        cout << ans << "\n";
    }
    return 0;
}