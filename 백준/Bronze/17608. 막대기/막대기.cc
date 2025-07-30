#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
stack<ll> s;
int main(){
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        while (!s.empty() && s.top()<=a)
            s.pop();
        s.push(a);
    }
    cout << s.size();
    return 0;
}