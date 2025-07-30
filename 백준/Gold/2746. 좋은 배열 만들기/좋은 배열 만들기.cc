#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1000005], sum, ans, cnt;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0, a;i<N;i++){
        cin >> a;
        v.push_back(a);
        arr[a]++;
        sum+=a;
    }
    sort(v.begin(),v.end(),greater<ll>());
    if (v[2]==sum-v[0]-v[1]-v[2])
        ans++;
    arr[v[0]]--,arr[v[1]]--;
    if (1<=sum-v[0]-v[1]*2 && sum-v[0]-v[1]*2<=1000000)
        ans+=arr[sum-v[0]-v[1]*2];
    arr[v[0]]++,arr[v[1]]++;
    for (int i=0;i<N;i++){
        arr[v[0]]--,arr[v[i]]--;
        if (1<=sum-v[0]*2-v[i] && sum-v[0]*2-v[i]<=1000000)
            cnt+=arr[sum-v[0]*2-v[i]];
        arr[v[0]]++,arr[v[i]]++;
    }
    cout << ans+cnt/2;
    return 0;
}