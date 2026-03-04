#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S, chk="aeiouAEIOU";
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (ll i=0;i<chk.size();i++){
        if (S.rfind(chk[i])!=string::npos)
            N=max(N,(ll)S.rfind(chk[i])+1);
    }
    cout << S.substr(0,N)+"ntry";
    return 0;
}