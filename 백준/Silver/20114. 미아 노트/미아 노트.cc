#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char ans[105];
    fill(&ans[0],&ans[104],'?');
    ll N, H, W;
    cin >> N >> H >> W;
    for (int i=0;i<H;i++){
        string s;
        cin >> s;
        for (int j=0;j<s.size();j++){
            if (ans[j/W]=='?' && s[j]!='?')
                ans[j/W]=s[j];
        }
    }
    for (int i=0;i<N;i++)
        cout << ans[i];
    return 0;
}