#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> arr;
ll K, N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    for (int i=0;i<N;i++){
        ll M, cnt=0;
        cin >> M;
        for (int j=0;j<M;j++){
            ll a, b;
            cin >> a >> b;
            cnt=max(cnt,a*a+b*b);
        }
        arr.push_back(cnt);
    }
    sort(arr.begin(),arr.end());
    cout << arr[K-1] << ".00";
    return 0;
}