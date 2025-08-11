#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> N >> M){
        N*=10000000;
        v.clear();
        for (int i=0;i<M;i++){
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll L=0, R=M-1;
        while (L<R){
            if (v[L]+v[R]==N){
                cout << "yes " << v[L] << " " << v[R];
                break;
            }
            else if (v[L]+v[R]>N)
                R--;
            else
                L++;
        }
        if (L>=R)
            cout << "danger";
        cout << "\n";
    }
    return 0;
}