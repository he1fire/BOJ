#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
string s, ans;
ll chk;
stack<char> st;
int main(){
    getline(cin, s);
    for (int i=0;i<s.size();i++){
        if (s[i]=='<'){
            while (!st.empty()){
                ans+=st.top();
                st.pop();
            }
            chk=1;
        }
        if (chk){
            if (s[i]!='>')
                ans+=s[i];
            else{
                while (!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                ans+=s[i];
                chk=0;
            }
            continue;
        }
        if (s[i]==' '){
            while (!st.empty()){
                ans+=st.top();
                st.pop();
            }
            ans+=s[i];
        }
        else
            st.push(s[i]);
    }
    while (!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout << ans;
    return 0;
}