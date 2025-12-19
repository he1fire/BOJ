#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
ll f(string x){
    for (ll i=0;i<x.size();i++){
        if ('A'<=x[i] && x[i]<='Z')
            x[i]+='a'-'A';
    }
    for (ll i=0;i<x.size()/2;i++){
        if (x[i]!=x[x.size()-i-1])
            return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    for (ll i=0;i<N;i++){
        string s;
        getline(cin,s);
        cout << (f(s) ? "Yes\n" : "No\n");
    }
    return 0;
}