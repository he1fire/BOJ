#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
ll N, ans, gcd;
vector<ll> arr;
ll f(ll a, ll b){
    return a ? f(b%a, a) : b;
}
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
    for (int i=2;i<N;i++){
        if (!gcd)
            gcd=f(arr[1]-arr[0],arr[i]-arr[i-1]);
        else
            gcd=f(gcd,arr[i]-arr[i-1]);
    }
    for (int i=1;i<N;i++){
        ans+=(arr[i]-arr[i-1])/gcd-1;
    }
    cout << ans;
    return 0;
}