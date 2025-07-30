#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string s;
stack<char> s1, s2;
void f(){
    for (auto x:s){
        if (x=='<'){
            if (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        else if (x=='>'){
            if (!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        else if (x=='-'){
            if (!s1.empty())
                s1.pop();
        }
        else
            s1.push(x);
    }
    while (!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()){
        cout << s2.top();
        s2.pop();
    }
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> s;
        f();
    }
    return 0;
}