#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, x, y=1e9+7;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=1;i<=N;i++){
        ll cnt=0;
        for (int j=1,a;j<=M;j++){
            cin >> a;
            cnt+=a;
            if (cnt>=K && j<y){
                x=i;
                y=j;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}