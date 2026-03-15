#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll f(){
    ll ret=1;
    for (ll i=1;i<S.size();i++){
        set<string> s;
        for (ll j=0;j<S.size()-i;j++){
            string x="";
            x+=S[j];
            x+=S[j+i];
            s.insert(x);
        }
        if (s.size()<S.size()-i)
            ret=0;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        cin >> S;
        if (S=="*")
            break;
        cout << S << " is" << (f() ? "" : " NOT") << " surprising.\n";
    }
    

    return 0;
}