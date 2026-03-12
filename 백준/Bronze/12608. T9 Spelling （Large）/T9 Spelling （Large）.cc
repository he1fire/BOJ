#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
string f(char c){
    if (c==' ')
        return "0";
    string ret="", x="22233344455566677778889999", y="12312312312312312341231234";
    for (ll i=0;i<y[c-'a']-'0';i++)
        ret+=x[c-'a'];
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    for (ll i=1;i<=N;i++){
        getline(cin,S);
        cout << "Case #" << i << ": ";
        string ans="";
        for (auto x:S){
            string now=f(x);
            if (now[0]==ans[ans.size()-1])
                ans+=' ';
            ans+=now;
        }
        cout << ans << "\n";
    }
    return 0;
}