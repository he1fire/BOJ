#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll cnt=0;
        string s;
        cin >> s;
        if (s=="#")
            break;
        for (int i=0;i<s.size();i++){
            if (s[i]=='1')
                cnt++;
            if (i==s.size()-1){
                if ((s[i]=='e' && cnt%2==0) ||(s[i]=='o' && cnt%2==1))
                    s[i]='0';
                else
                    s[i]='1';
            }
        }
        cout << s << "\n";
    }
    return 0;
}