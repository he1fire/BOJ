#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,string> pls;
vector<ll> v1;
vector<pls> v2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<3;i++){
        ll a, b;
        string c;
        cin >> a >> b >> c;
        v1.push_back(b);
        v2.push_back({a,c});
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater<>());
    for(auto i:v1)
        cout << i%100;
    cout << "\n";
    for(auto i:v2)
        cout << i.second[0];
    cout << "\n";
    return 0;
}