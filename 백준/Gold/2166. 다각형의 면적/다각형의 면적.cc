#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll CCW(pll a, pll b, pll c){
    return a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
}
int main(){
    vector<pll> arr;
    ll N;
    double ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back(make_pair(a,b));
    }
    for (int i=1;i<N-1;i++){
        ans+=CCW(arr[0],arr[i],arr[i+1]);
    }
    printf("%.1f",abs(ans/2));
    return 0;
}