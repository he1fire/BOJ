#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
vector<ll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    cin >> M;
    for (int i=0;i<N;i++){
        if (arr[i]){
            ll cnt=0;
            if (arr[i]%M)
                cnt=arr[i]/M+1;
            else
                cnt=arr[i]/M;
            ans+=cnt*M;
        }
    }
    cout << ans;
    return 0;
}