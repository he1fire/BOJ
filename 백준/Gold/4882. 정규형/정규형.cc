#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
char TF(char a, char b, ll op){
    if (op==0 && a=='T' && b=='T')
        return 'T';
    else if (op==1 && (a=='T' || b=='T'))
        return 'T';
    else
        return 'F';
}
ll f(ll op){
    stack<char> s;
    for (auto x:S){
        if (x=='('){
            op^=1;
            s.push(x);
        }
        else if (x==')'){
            while (1){
                char a, b;
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                if (b=='('){
                    s.push(a);
                    break;
                }
                else
                    s.push(TF(a,b,op));
            }
            op^=1;
        }
        else
            s.push(x);
    }
    return s.top()=='T';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1;1;i++){
        cin >> S;
        if (S=="()")
            break;
        ll cnt=0, mx=0;
        for (auto x:S){
            if (x=='(')
                cnt++;
            else if (x==')')
                cnt--;
            mx=max(mx,cnt);
        }
        cout << i << ". " << (f(mx%2) ? "true\n" : "false\n");
    }
    return 0;
}