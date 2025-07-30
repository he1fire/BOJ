#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N >> M;
        for (int i=0;i<M;i++){
            ll a, b;
            cin >> a >> b;
        }
        cout << N-1 << "\n";
    }
    return 0;
}