#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
queue<ll> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string s;
        cin >> s;
        if (s[0]=='p' && s[1]=='u'){
            ll a;
            cin >> a;
            q.push(a);
        }
        else if (s[0]=='p'){
            if (q.empty())
                cout << "-1\n";
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (s[0]=='s')
            cout << q.size() << "\n";
        else if (s[0]=='e')
            cout << q.empty() << "\n";
        else if (s[0]=='f'){
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.front() << "\n";
        }
        else{
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.back() << "\n";
        }
    }
    return 0;
}