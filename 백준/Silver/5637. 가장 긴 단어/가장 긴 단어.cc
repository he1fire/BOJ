#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, ans;
void f(){
    string ret="";
    for (auto x:S){
        if ('A'<=x && x<='Z')
            x=x-'A'+'a';
        if (('a'<=x && x<='z') || x=='-')
            ret+=x;
        else{
            if (ret.size()>ans.size())
                ans=ret;
            ret="";
        }
    }
    if (ret.size()>ans.size())
        ans=ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> S){
        if (S=="E-N-D")
            break;
        f();
    }
    cout << ans;
    return 0;
}