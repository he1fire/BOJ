#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll ans=0, cnt=0;
        cin >> S;
        for (int i=0;i<S.size();i++){
            if (i%8==7){
                if (cnt%2+'0'!=S[i])
                    ans++;
                cnt=0;
            }
            else if (S[i]=='1')
                cnt++;
        }
        cout << ans << "\n";
    }
    return 0;
}