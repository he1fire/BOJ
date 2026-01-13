#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (ll i=0;i<S.size();i++){
        cout << S[i];
        if (S[i]=='(' && S[i+1]==')')
            cout << "1";
        else if (S[i]==')' && S[i+1]=='(')
            cout << "+";
    }
    return 0;
}