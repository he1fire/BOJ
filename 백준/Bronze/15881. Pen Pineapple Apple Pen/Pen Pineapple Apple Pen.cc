#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S, x="pPAp";
    int N, ans=0;
    cin >> N >> S;
    for (int i=0;i+3<S.size();i++){
        int a=0;
        for (int j=0;j<4;j++){
            if (S[i+j]==x[j])
                a++;
        }
        if (a==4){
            ans++;
            for (int j=0;j<4;j++){
                S[i+j]='-';
            }
        }
    }
    cout << ans;
    return 0;
}
