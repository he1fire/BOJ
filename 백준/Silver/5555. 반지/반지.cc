#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
string S;
int N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        a+=a;
        if (a.find(S)!=string::npos)
            ans++;
    }
    cout << ans;
    return 0;
}