#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll a, b, c;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (ll i=0;i<S.size();i++){
        if (S[i]=='@')
            a=i;
        if (S[i]=='#')
            b=i;
        if (S[i]=='!')
            c=i;
    }
    if ((a<b && b<c) || (a>b && b>c))
        cout << abs(a-c)-1;
    else
        cout << "-1";
    return 0;
}