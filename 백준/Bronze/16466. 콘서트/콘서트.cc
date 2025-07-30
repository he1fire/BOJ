#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=-1;
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
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++){
        if (arr[i]!=i+1){
            ans=i+1;
            break;
        }
    }
    if (ans!=-1)
        cout << ans;
    else
        cout << N+1;
    return 0;
}