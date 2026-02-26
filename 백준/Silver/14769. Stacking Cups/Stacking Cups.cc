#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    string s;
    ll x;
    bool operator<(st& tmp){
        return x<tmp.x;
    }
};
ll N;
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a, b;
        cin >> a >> b;
        if (all_of(a.begin(), a.end(), ::isdigit))
            v.push_back({b,stol(a)/2});
        else
            v.push_back({a,stol(b)});
    }
    sort(v.begin(),v.end());
    for (auto x:v)
        cout << x.s << "\n";
    return 0;
}