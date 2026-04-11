#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x, y, N, arr[1005][1005], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> y >> N;
    arr[x][y]=1;
    while (arr[x][y]<2){
        ans++;
        if (x+y+2<N){
            x++;
            y++;
        }
        else{
            x/=2;
            y/=2;
        }
        arr[x][y]++;
    }
    cout << ans;
    return 0;
}