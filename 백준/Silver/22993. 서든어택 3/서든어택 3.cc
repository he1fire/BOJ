#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> ans;
    for (int i=0,a;i<N-1;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (auto x:v){
        if (ans>x)
            ans+=x;
    }
    if (v.empty() || ans>v[v.size()-1])
        cout << "Yes";
    else
        cout << "No";
    return 0;
}