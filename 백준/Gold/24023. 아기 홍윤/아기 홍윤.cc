#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, st, ed, cnt;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        ll x;
        cin >> x;
        if ((x|M)==M){
            if (!st)
                st=i;
            cnt|=x;
            if (cnt==M){
                cout << st << " " << i;
                return 0;
            }
        }
        else{
            cnt=0;
            st=0;
        }
    }
    cout << "-1";
    return 0;
}