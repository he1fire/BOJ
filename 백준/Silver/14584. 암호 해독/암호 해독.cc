#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
vector<string> v;
string f(ll x){
    string ret=S;
    for (ll i=0;i<ret.size();i++){
        ll c=ret[i]+x;
        if (c>'z')
            c-=26;
        ret[i]=c;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> N;
    for (ll i=0;i<N;i++){
        string a;
        cin >> a;
        v.push_back(a);
    }
    for (ll i=0;i<26;i++){
        string s=f(i);
        for (ll j=0;j<N;j++){
            if (s.find(v[j])!=string::npos){
                cout << s;
                break;
            }
        }
    }
    return 0;
}