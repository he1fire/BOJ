#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        ans+=b;
        if (ans>K){
            cout << i+1 << " 1";
            return 0;
        }
    }
    cout << "-1";
    return 0;
}