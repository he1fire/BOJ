#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    ll l=0, h=1, chk=1;
    while (l<=N){
        if (chk<N){
            h++;
            chk+=h;
        }
        else{
            if (chk==N)
                ans++;
            l++;
            chk-=l;
        }
            
    }
    cout << ans;
    return 0;
}