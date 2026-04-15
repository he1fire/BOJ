#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    cout << (N<=M*K ? "yes" : "no");
    return 0;
}