#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            for (int k=j+1;k<N;k++){
                if (v[i]*v[j]==v[k])
                    ans++;
            }
        }
    }
    cout << ans;
    return 0;
}