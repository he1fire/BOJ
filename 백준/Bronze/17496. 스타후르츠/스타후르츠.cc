#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll N, T, C, P;
    cin >> N >> T >> C >> P;
    cout << (N-1)/T*C*P;
    return 0;
}