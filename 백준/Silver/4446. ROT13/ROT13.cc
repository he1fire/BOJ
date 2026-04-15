#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, x="aiyeou", y="bkxznhdcwgpvjqtsrlmf";
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (getline(cin,S)){
        for (ll i=0;i<S.size();i++){
            if (x.find(S[i])!=x.npos)
                S[i]=x[(x.find(S[i])+3)%6];
            else if (x.find(S[i]+32)!=x.npos)
                S[i]=x[(x.find(S[i]+32)+3)%6]-32;
            if (y.find(S[i])!=y.npos)
                S[i]=y[(y.find(S[i])+10)%20];
            else if (y.find(S[i]+32)!=y.npos)
                S[i]=y[(y.find(S[i]+32)+10)%20]-32;
        }
        cout << S << "\n";
    }
    return 0;
}