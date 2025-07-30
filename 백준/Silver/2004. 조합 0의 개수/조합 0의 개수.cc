#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M, two=0, five=0;
    cin >> N >> M;
    for (ll i=2;i<=N;i*=2){
        two+=N/i;
        two-=M/i;
        two-=(N-M)/i;
    }
    for (ll i=5;i<=N;i*=5){
        five+=N/i;
        five-=M/i;
        five-=(N-M)/i;
    }
    cout << min(two,five);
    return 0;
}
