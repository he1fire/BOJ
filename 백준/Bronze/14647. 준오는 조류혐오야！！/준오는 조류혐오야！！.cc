#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, x[505], y[505], cnt, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            ll a;
            cin >> a;
            while (a){
                if (a%10==9){
                    cnt++;
                    x[i]++;
                    y[j]++;
                }
                a/=10;
            }
        }
    }
    for (int i=0;i<505;i++)
        ans=max({ans,x[i],y[i]});
    cout << cnt-ans;
    return 0;
}