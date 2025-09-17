#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, ans=INF;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0, a;i<N;i++){
        cin >> a;
        if (a==1)
            v.push_back(i);
    }
    if (v.size()<M){
        cout << -1;
        return 0;
    }
    for (int i=0;i<=v.size()-M;i++)
        ans=min(ans, v[i+M-1]-v[i]+1);
    cout << ans;
    return 0;
}