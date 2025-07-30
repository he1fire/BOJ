#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
ll f(string s) {
    ll ret=0;
    for (auto i:s){
        ret*=10;
        ret+=i-'0';
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    vector<string> name;
    map<string,ll> m;
    for (ll i=0;i<N;i++){
        string s;
        cin >> s;
        name.push_back(s);
        m[s]=i+1;
    }
    for (ll i=0;i<M;i++){
        string s;
        cin >> s;
        if (s[0]>='0' && s[0]<='9')
            cout << name[f(s)-1] << "\n";
        else
            cout << m[s] << "\n";
    }
    return 0;
}