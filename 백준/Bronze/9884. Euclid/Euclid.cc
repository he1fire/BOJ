#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
ll gcd(ll a, ll b){
    return a ? gcd(b%a,a) : b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    cout << gcd(N,M);
    return 0;
}