#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    getline(cin,S);
    for (int i=0;i<S.size();i++){
        if (S[i]<'a' || S[i]>'z')
            continue;
        S[i]-=N;
        if (S[i]<'a')
            S[i]+=26;
        N=N%25+1;
    }
    cout << S;
    return 0;
}