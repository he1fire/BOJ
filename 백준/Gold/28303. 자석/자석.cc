#include <bits/stdc++.h>
#define ll long long
#define INF -123456789
using namespace std;
ll N, M, ans=INF;
vector<ll> arr;
ll f(){
    ll ret=INF;
    vector<ll> v;
    for (int i=0;i<N;i++){
        v.push_back(arr[i]+M*i);
    }
    for (int i=0;i<N;i++){
        int j;
        for (j=i+1;j<N;j++){
            ret=max(ret,v[i]-v[j]);
            if (v[j]>v[i])
                break;
        }
        i=j-1;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    ans=max(f(),ans);
    reverse(arr.begin(),arr.end());
    ans=max(f(),ans);
    cout << ans;
    return 0;
}