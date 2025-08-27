#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        ll cnt=0;
        string s;
        cin >> s;
        for (auto x:s){
            if (x=='0')
                cnt++;
            else
                cnt=0;
            ans+=(cnt>=K);
        }
    }
    cout << ans;
    return 0;
}