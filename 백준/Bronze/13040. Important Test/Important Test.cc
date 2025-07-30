#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    while (N--){
        ll a, b, ans=0;
        vector<ll> v;
        cin >> a;
        for (int i=0;i<a;i++){
            cin >> b;
            v.push_back(b);
        }
        for (int i=0;i<a;i++){
            ll tmp=v[i], cnt=0;
            v[i]=min(v[i],K);
            for (int j=0, x=M;j<a;j++){
                if (v[j]>x)
                    break;
                cnt++;
                x-=v[j];
            }
            v[i]=tmp;
            ans=max(cnt,ans);
        }
        
        cout << ans << "\n";
    }
    return 0;
}