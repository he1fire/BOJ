#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
string S;
vector<ll> v;
void f(){
    ll cnt=0, x=1;
    for (ll i=0;i<=S.size();i++){
        if (S[i]==',' || S[i]==0){
            v.push_back(cnt*x);
            cnt=0, x=1;
        }
        else if (S[i]=='-')
            x=-1;
        else
            cnt=cnt*10+S[i]-'0';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S;
    f();
    while (M--){
        for (ll i=0;i<v.size()-1;i++)
            v[i]=v[i+1]-v[i];
        v.pop_back();
    }
    for (ll i=0;i<v.size();i++){
        cout << v[i];
        if (i!=v.size()-1)
            cout << ",";
    }
    return 0;
}