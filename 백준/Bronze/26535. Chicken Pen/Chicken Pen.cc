#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
void f(ll x){
    for (ll i=0;i<x+2;i++){
        for (ll j=0;j<x+2;j++){
            if (i==0 || j==0 || i==x+1 || j==x+1)
                cout << "x";
            else
                cout << ".";
        }
        cout << "\n";
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;1;i++){
        if (i*i>=N){
            f(i);
            break;
        }
    }
    return 0;
}