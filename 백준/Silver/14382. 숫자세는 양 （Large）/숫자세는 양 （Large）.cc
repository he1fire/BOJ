#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        cin >> M;
        cout << "Case #" << i << ": ";
        if (!M)
            cout << "INSOMNIA\n";
        else {
            set<ll> s;
            for (ll j=1;1;j++){
                for (ll x=M*j;x;x/=10)
                    s.insert(x%10);
                if (s.size()==10){
                    cout << M*j << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}