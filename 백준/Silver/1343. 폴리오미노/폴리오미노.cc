#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll chk;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]!='X')
            continue;
        if (i+3<S.size() && S[i]==S[i+1] && S[i+1]==S[i+2] && S[i+2]==S[i+3])
            S[i]=S[i+1]=S[i+2]=S[i+3]='A';
        else if (i+1<S.size() && S[i]==S[i+1])
            S[i]=S[i+1]='B';
        else
            chk=1;
    }
    cout << (chk ? "-1" : S);
    return 0;
}