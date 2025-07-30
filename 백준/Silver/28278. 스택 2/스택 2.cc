#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N;
stack<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a;
        if (a==1){
            cin >> b;
            s.push(b);
        }
        else if (a==2){
            if (s.empty()){
                cout << "-1\n";
                continue;
            }
            cout << s.top() << "\n";
            s.pop();
        }
        else if (a==3){
            cout << s.size() << "\n";
        }
        else if (a==4){
            cout << s.empty() << "\n";
        }
        else{
            if (s.empty()){
                cout << "-1\n";
                continue;
            }
            cout << s.top() << "\n";
        }
    }
    return 0;
}