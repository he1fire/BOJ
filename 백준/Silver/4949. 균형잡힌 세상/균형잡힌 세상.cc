#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool f(string s){
    stack<char> st;
    for (int i=0;i<s.size();i++){
        if (s[i]=='(' || s[i]=='[')
            st.push(s[i]);
        else if (s[i]==')'){
            if (!st.empty() && st.top()=='(')
                st.pop();
            else
                return 0;
        }
        else if (s[i]==']'){
            if (!st.empty() && st.top()=='[')
                st.pop();
            else
                return 0;
        }
    }
    if (st.empty())
        return 1;
    else
        return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        string S;
        getline(cin,S);
        if (S==".")
            break;
        f(S) ? cout << "yes\n" : cout << "no\n"; 
    }
    return 0;
}