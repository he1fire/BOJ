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
        if (a%2)
            v.push_back(a);
        else
            ans+=a;
    }
    sort(v.begin(),v.end(),greater<>());
    for (int i=0;i<v.size();i++){
        if (i==v.size()-1 && v.size()%2)
            continue;
        ans+=v[i];
    }
    cout << ans;
    return 0;
}