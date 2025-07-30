#include <bits/stdc++.h>
#define ll long long
#define MOD 16769023
using namespace std;
typedef pair<ll,ll> pll;
ll N, ans=2;
int main(){
    cin >> N;
    N--;
    N/=2;
    while (N--){
        ans*=2;
        ans%=MOD;
    }
    cout << ans;
    return 0;
}