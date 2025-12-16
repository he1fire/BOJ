#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
string f(string x){
    ll ret=x.size();
    return to_string(ret);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> S){
        if (S=="END")
            break;
        ll cnt=1;
        for (;S!=f(S);S=f(S))
            cnt++;
        cout << cnt << "\n";
    }
    return 0;
}