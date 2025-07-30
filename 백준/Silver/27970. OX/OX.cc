#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
ll arr[100005], ans;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (i)
            arr[i]=((arr[i-1]-1)+arr[i-1]+1)%MOD;
        else
            arr[i]=1;
        if (S[i]=='O')
            ans=(ans+arr[i])%MOD;
    }
    cout << ans;
    return 0;
}