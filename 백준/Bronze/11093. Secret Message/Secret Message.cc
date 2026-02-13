#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> S;
        ll x=0;
        while (x*x<S.size())
            x++;
        for (ll i=0;i<x;i++){
            for (ll j=x;j--;j>=0){
                if (j*x+i>=S.size())
                    continue;
                cout << S[j*x+i];
            }
        }
        cout << "\n";
    }
    return 0;
}