#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v[2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        cin >> N;
        if (!N)
            break;
        for (ll i=0;i<2;i++){
            v[i].clear();
            for (ll j=0;j<N;j++){
                v[i].emplace_back();
                cin >> v[i].back();
            }
        }
        ll A=0, B=0;
        for (ll i=0;i<N;i++){
            if (abs(v[0][i]-v[1][i])==0)
                continue;
            else if (abs(v[0][i]-v[1][i])<=1){
                if (v[0][i]+v[1][i]!=3){
                    if (v[0][i]>v[1][i])
                        B+=v[0][i]+v[1][i];
                    else
                        A+=v[0][i]+v[1][i];
                }
                else{
                    if (v[0][i]>v[1][i])
                        B+=6;
                    else
                        A+=6;
                }
            }
            else{
                if (v[0][i]>v[1][i])
                    A+=v[0][i];
                else
                    B+=v[1][i];
            }
        }
        cout << "A has " << A << " points. B has " << B << " points.\n\n";
    }
    return 0;
}