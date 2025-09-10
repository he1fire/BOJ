#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[30];
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    ll L=0, R=1;
    arr[S[0]-'a']++;
    while (1){
        ll cnt=0;
        for (auto x:arr){
            if (x)
                cnt++;
        }
        if (cnt<=N){
            ans=max(ans,R-L);
            if (R>=S.size())
                break;
            arr[S[R++]-'a']++;
        }
        else
            arr[S[L++]-'a']--;
    }
    cout << ans;
    return 0;
}