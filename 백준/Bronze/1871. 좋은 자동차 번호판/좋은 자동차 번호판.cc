#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    while (N--){
        string S;
        cin >> S;
        ll a=0, b=0;
        for (ll i=0;i<3;i++){
            a+=(S[i]-'A')*pow(26,2-i);
        }
        for (ll i=4;i<8;i++){
            b*=10;
            b+=S[i]-'0';
        }
        abs(a-b)>100 ? cout << "not nice\n" : cout << "nice\n"; 
    }
    return 0;
}