#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll chk;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size()-1;i++){
        if (S[i]=='s' && S[i+1]=='s')
            chk=1;
    }
    cout << (chk ? "hiss" : "no hiss");
    return 0;
}