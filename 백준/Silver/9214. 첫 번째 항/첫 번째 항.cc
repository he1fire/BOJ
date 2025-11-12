#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
string f(string s){
    if (s.size()%2)
        return "";
    string ret="";
    for (int i=0;i<s.size();i+=2){
        ll cnt=s[i]-'0';
        while (cnt--)
            ret+=s[i+1];
    }
    return ret;
}
string g(string s){
    if (s=="")
        return "";
    string ret="";
    ll cnt=1;
    char c=s[0];
    for (int i=1;i<s.size();i++){
        if (s[i]==c)
            cnt++;
        else{
            ret+=(char)(cnt+'0');
            ret+=c;
            c=s[i];
            cnt=1;
        }
    }
    ret+=(char)(cnt+'0');
    ret+=c;
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1;1;i++){
        cin >> S;
        if (S=="0")
            break;
        else{
            while (S==g(f(S)) && S!=f(S))
                S=f(S);
            cout << "Test "<< i << ": " << S << "\n";
        }
    }
    return 0;
}