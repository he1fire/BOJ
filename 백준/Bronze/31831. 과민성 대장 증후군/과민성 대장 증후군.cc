#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, M, ans, cnt;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0,a;i<N;i++){
        cin >> a;
        cnt+=a;
        cnt=max((ll)0,cnt);
        if(cnt >= M)
            ans++;
    }
    cout << ans;
    return 0;
}