#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[2000005];
set<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=2;i<=2000000;i++){
        if (!arr[i]){
            s.insert(i);
            for (ll j=i*i;j<=2000000;j+=i)
                arr[j]=1;
        }
    }
    while (N--){
        cin >> M;
        for (auto x:s){
            if (s.find(M*2-x)!=s.end()){
                cout << x << " " << M*2-x << "\n";
                break;
            }
        }
    }
}