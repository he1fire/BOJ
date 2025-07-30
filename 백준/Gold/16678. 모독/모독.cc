#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
vector<ll> v;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=1;i<v.size();i++){
        if (v[i]!=v[i-1] && v[i]!=v[i-1]+1){
            ans+=v[i]-(v[i-1]+1);
            v[i]=v[i-1]+1;
        }
    }
    for (int i=0;i<v.size();i++){
        if (v[i]!=i+1)
            ans+=v[i]-(i+1);
        else
            break;
    }
    cout << ans;
    return 0;
}