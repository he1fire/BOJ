#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, a, b, ans;
int c=0;
int main(){
    cin >> S;
    a=S;
    b=S;
    a+="0000";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    b+="0000";
    for (int i=0;i<a.size();i++){
        int x=a[i]-'0'+b[i]-'0'+c;
        if (x>1){
            c=1;
            x-=2;
        }
        else
            c=0;
        if (x)
            ans+='1';
        else
            ans+='0';
    }
    if (c)
        ans+='1';
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}