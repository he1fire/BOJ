#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, A, B, arr[100005], cnt, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> A >> B;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<A+B;i++){
        ll x;
        cin >> x;
        arr[x]=(i<A ? 1 : -1);
    }
    v.push_back(0);
    for (int i=0;i<v.size();i++){
        if (i!=0 && arr[v[i]]!=arr[v[i-1]]){
            if (abs(cnt)>=3)
                ans+=cnt;
            cnt=0;
        }
        cnt+=arr[v[i]];
    }
    cout << ans;
    return 0;
}