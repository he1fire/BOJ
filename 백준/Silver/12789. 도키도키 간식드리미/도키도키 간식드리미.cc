#include <bits/stdc++.h>
#define ll long long
using namespace std;
queue<ll> q;
stack<ll> s;
ll N, cnt=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        q.push(a);
    }
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        if (x==cnt)
            cnt++;
        else
            s.push(x);
        while (!s.empty() && s.top()==cnt){
            s.pop();
            cnt++;
        }
    }
    if (s.empty())
        cout << "Nice";
    else
        cout << "Sad";
    return 0;
}