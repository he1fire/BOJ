#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[105], cnt[105], ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    for (int i=0;i<M;i++){
        ll x;
        cin >> x;
        v.push_back(x);
        if (i>0 && x==v[i-1])
            cnt[x]=0;
        else if (cnt[x]<arr[x])
            cnt[x]=0;
        for (int j=1;j<=N;j++){
            if (j!=x)
                cnt[j]++;
            else if (cnt[j]!=0)
                cnt[j]++;
        }
    }
    for (int i=1;i<=N;i++){
        if (cnt[i]>=arr[i])
            ans++;
    }
    cout << ans;
    return 0;
}
