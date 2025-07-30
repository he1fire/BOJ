#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[200005], cnt[200005], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        ll tmp=1;
        for (int j=0;j<4;j++)
            tmp*=arr[(i+j)%N];
        cnt[i]=tmp;
        ans+=tmp;
    }
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        for (int j=0;j<4;j++){
            cnt[(N+a-1-j)%N]*=-1;
            ans+=cnt[(N+a-1-j)%N]*2;
        }
        cout << ans << "\n";
    }
    return 0;
}