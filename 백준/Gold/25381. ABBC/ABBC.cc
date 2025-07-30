#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
queue<ll> a, b, c;
ll ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='A')
            a.push(i);
        else if (S[i]=='B')
            b.push(i);
        else
            c.push(i);
    }
    for (int i=0;i<S.size();i++){
        if (!b.empty() && i==b.front() && !c.empty()){
            b.pop();
            c.pop();
            ans++;
        }
        else if (!c.empty() && i==c.front())
            c.pop();
    }
    for (int i=0;i<S.size();i++){
        if (!a.empty() && i==a.front() && !b.empty()){
            a.pop();
            b.pop();
            ans++;
        }
        else if (!b.empty() && i==b.front())
            b.pop();
    }
    cout << ans;
    return 0;
} 