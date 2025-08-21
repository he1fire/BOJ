#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, cnt;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    ll L=0, R=0;
    while (R<N){
        if (cnt+v[R]<=M){
            cnt+=v[R];
            R++;
        }
        else if (L==R){
            L++;
            R++;
        }
        else{
            cnt-=v[L];
            L++;
        }
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}