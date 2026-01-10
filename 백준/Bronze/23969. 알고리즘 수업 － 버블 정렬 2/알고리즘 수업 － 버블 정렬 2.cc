#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, cnt;
vector<ll> v;
void f(){
    for (ll i=N-1;i>=0;i--){
        for (ll j=0;j<i;j++){
            if (v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                cnt++;
                if (cnt==M){
                    for (auto x:v)
                        cout << x << " ";
                    return;
                }
            }
        }
    }
    cout << "-1";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    f();
    
    return 0;
}