#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll ans=0;
        cin >> S;
        for (int i=0;i<S.size();i++){
            ll a=S[i]-'0';
            if (i%2==0){
                a*=2;
                while (a){
                    ans+=a%10;
                    a/=10;
                }
            }
            else
                ans+=a;
        }
        cout << (ans%10 ? "F\n" : "T\n");
    }
    return 0;
}