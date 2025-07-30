#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, arr[105], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    for (int i=0;i<3;i++){
        ll x, y;
        cin >> x >> y;
        for (int j=x;j<y;j++)
            arr[j]++;
    }
    for (int i=1;i<=100;i++){
        if (arr[i]==1)
            ans+=a;
        else if (arr[i]==2)
            ans+=b*2;
        else if (arr[i]==3)
            ans+=c*3;
    }
    cout << ans;
    return 0;
}