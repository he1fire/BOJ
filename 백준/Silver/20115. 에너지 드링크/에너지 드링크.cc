#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll N;
vector<ld> v;
ld ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ld a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<v.size()-1;i++)
        ans+=v[i]/2;
    ans+=v[v.size()-1];
    cout << ans;
    return 0;
}