#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, A, B;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (ll i=0;i<N;i++){
        if ((S[i]-'0')%2)
            A++;
        else
            B++;
    }
    if (A==B)
        cout << "-1";
    else
        cout << (A>B);
    return 0;
}