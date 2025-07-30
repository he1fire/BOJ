#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string S;
    ll chk=0;
    cin >> S;
    for (int i=0;i<S.size()-1;i++){
        ll x=1, y=1;
        for (int j=0;j<=i;j++)
            x*=S[j]-'0';
        for (int j=i+1;j<S.size();j++)
            y*=S[j]-'0';
        if (x==y)
            chk=1;
    }
    chk ? cout << "YES" : cout << "NO";
    return 0;
}