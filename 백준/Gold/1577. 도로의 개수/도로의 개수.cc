#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll a, b, c, d;
    ABC(){}
    ABC(ll a, ll b, ll c, ll d) : a(a), b(b), c(c), d(d) {}
};
ll N, M, K, DP[105][105];
vector<ABC> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    while (K--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a>c || (a==c && b>d))
            arr.push_back({a,b,c,d});
        else
            arr.push_back({c,d,a,b});
    }
    DP[0][0]=1;
    for (int i=0;i<=N;i++){
        for (int j=0;j<=M;j++){
            if (i-1>=0){
                ll chk=1;
                for (auto k:arr){
                    if (k.a==i && k.b==j && k.c==i-1)
                        chk=0;
                }
                if (chk)
                    DP[i][j]+=DP[i-1][j];
            }
            if (j-1>=0){
                ll chk=1;
                for (auto k:arr){
                    if (k.a==i && k.b==j && k.d==j-1)
                        chk=0;
                }
                if (chk)
                    DP[i][j]+=DP[i][j-1];
            }
        }
    }
    cout << DP[N][M];
    return 0;
}