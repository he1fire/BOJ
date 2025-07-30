#include <bits/stdc++.h>
#define ll long long
#define INF (1e9)+7
using namespace std;
ll N, ans;
int main(void){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        if (a==-1)
            continue;
        if (b==-1 && c==-1)
            ans++;
        else if (b!=-1 && a<=b && c==-1)
            ans++;
        else if (a<=b && b<=c)
            ans++;
    }
    cout << ans;
    return 0;
}