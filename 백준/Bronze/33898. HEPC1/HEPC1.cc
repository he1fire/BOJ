#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, a, b;
ll ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    reverse(b.begin(),b.end());
    S=a+b;
    for (int i=0;i<4;i++){
        string x=S;
        char tmp;
        reverse(x.begin(),x.end());
        if (S=="HEPC" || x=="HEPC")
            ans=1;
        tmp=S[0];
        for (int j=0;j<3;j++)
            S[j]=S[j+1];
        S[3]=tmp;
    }
    cout << (ans ? "YES" : "NO");
    return 0;
}