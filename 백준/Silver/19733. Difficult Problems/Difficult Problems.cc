#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll cnt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (auto x:S){
        if (x=='A')
            cnt++;
    }
    for (ll i=1;1;i++){
        if (i*(i+1)/2>cnt){
            cout << i-1;
            break;
        }
    }
    return 0;
}