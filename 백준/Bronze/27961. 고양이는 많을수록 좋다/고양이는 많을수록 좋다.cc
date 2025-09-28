#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt=1;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (cnt<N){
        ans++;
        cnt*=2;
    }
    cout << (N==0 ? 0 : ans+1);
    return 0;
}