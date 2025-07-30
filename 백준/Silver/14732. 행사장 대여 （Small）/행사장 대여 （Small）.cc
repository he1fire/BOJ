#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, ans=0, arr[505][505];
int main(){
    cin >> N;
    while (N--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i=a;i<c;i++){
            for (int j=b;j<d;j++){
                arr[i][j]=1;
            }
        }
    }
    for (int i=0;i<=500;i++){
        for (int j=0;j<=500;j++){
            if (arr[i][j])
                ans++;
        }
    }
    cout << ans;
    return 0;
}