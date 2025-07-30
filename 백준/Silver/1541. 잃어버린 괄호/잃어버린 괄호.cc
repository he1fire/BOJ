#include <bits/stdc++.h>
#define ll long long
using namespace std;
string N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    vector<ll> arr;
    ll ans=0, cnt=0, plus=0;
    for (ll i=0;i<N.size();i++){
        if (N[i]>='0' && N[i]<='9'){
            cnt*=10;
            cnt+=N[i]-'0';
        }
        else {
            if (N[i]=='-'){
                arr.push_back(cnt+plus);
                plus=0;
            }
            else
                plus+=cnt;
            cnt=0;
        }
    }
    arr.push_back(cnt+plus);
    for (auto i:arr)
        ans-=i;
    cout << ans+arr[0]*2;
    return 0;
}