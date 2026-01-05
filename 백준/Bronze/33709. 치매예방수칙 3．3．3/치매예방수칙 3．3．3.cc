#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (auto x:S){
        if (x=='.' || x=='|' || x==':' || x=='#'){
            ans+=cnt;
            cnt=0;
        }
        else
            cnt=cnt*10+x-'0';
    }
    cout << ans+cnt;
    return 0;
}