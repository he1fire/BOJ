#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
vector<ll> v;
void twopointer(){
    ll L=0, R=N-1;
    while (L<R){
        ll x=v[L], y=v[R];
        if (x+y==M){
            if (x==y){
                ans+=(R-L+1)*(R-L)/2;
                break;
            }
            else{
                ll cntL=0, cntR=0;
                while (x==v[L]){
                    L++;
                    cntL++;
                }
                while (y==v[R]){
                    R--;
                    cntR++;
                }
                ans+=cntL*cntR;
            }
        }
        else if (x+y<M)
            L++;
        else
            R--;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    cin >> M;
    sort(v.begin(),v.end());
    twopointer();
    cout << ans;
    return 0;
}