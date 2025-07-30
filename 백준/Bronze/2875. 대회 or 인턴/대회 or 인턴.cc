#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T, ans;
int main(){
    cin >> N >> M >> T;
    while (N>=2 && M>=1){
        ans++;
        N-=2;
        M--;
    }
    T-=N+M;
    while (T>0){
        ans--;
        T-=3;
    }
    cout << ans;
    return 0;
}