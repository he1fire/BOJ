#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M;
vector<pll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> M;
        arr.clear();
        for (int i=0;i<M;i++){
            ll a, b;
            cin >> a >> b;
            arr.push_back({a,b});
        }
        sort(arr.begin(),arr.end());
        ll mn=1e9+7, ans=0;
        for (int i=0;i<M;i++){
            mn=min(mn,arr[i].second);
            if (arr[i].second>mn)
                ans++;
        }
        cout << M-ans << "\n";
    }
    return 0;
}