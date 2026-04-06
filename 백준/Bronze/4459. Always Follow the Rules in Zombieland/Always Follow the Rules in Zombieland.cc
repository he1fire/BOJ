#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<string> v;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    for (ll i=0;i<N;i++){
        getline(cin,S);
        v.push_back(S);
    }
    cin >> M;
    while (M--){
        ll a;
        cin >> a;
        if (a>N || a<1)
            cout << "Rule " << a << ": No such rule\n";
        else
            cout << "Rule " << a << ": " << v[a-1] << "\n";
    }
    return 0;
}