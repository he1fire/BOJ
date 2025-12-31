#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S, x="aeiouy";
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    while (N--){
        getline(cin,S);
        for (ll i=0;i<S.size();i++){
            if (x.find(S[i])!=string::npos)
                S[i]=x[(x.find(S[i])+1)%6];
            if (x.find(S[i]-'A'+'a')!=string::npos)
                S[i]=x[(x.find(S[i]-'A'+'a')+1)%6]+'A'-'a';
        }
        cout << S << "\n";
    }
    return 0;
}