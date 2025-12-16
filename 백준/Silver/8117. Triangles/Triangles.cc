#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> N){
        if (!N)
            break;
        v.push_back(N);
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<v.size()-2;i++){
        if (v[i]+v[i+1]>v[i+2]){
            cout << v[i] << " " << v[i+1] << " " << v[i+2];
            return 0;
        }
    }
    cout << "NIE";
    return 0;
}