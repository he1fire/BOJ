#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N%10==0)
        N/=10;
    while (N){
        if (N%10==0)
            ans++;
        N/=10;
    }
    cout << ans;
    return 0;
}