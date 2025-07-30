#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll N, M, K;
    cin >> N >> M >> K;
    for (int i=0;i<K;i++){
        ll a, b;
        cin >> a >> b;
        if (M==a)
            M=b;
        else if (M==b)
            M=a;
    }
    cout << M;
    return 0;
}