#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, A, B;
ll gcd(ll a, ll b){
    return a ? gcd(b%a,a) : b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(ll i=1;i*i<=M;i++){
        if (i*i>N)
            A++;
    }
    B=M-N;
    if (A)
        cout << A/gcd(A,B) << "/" << B/gcd(A,B);
    else
        cout << A;
    return 0;
}