#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M, L, ans=0;
    ll arr[1005]={0,};
    cin >> N >> M >> L;
    for (int i=1;1;ans++){
        arr[i]++;
        if (arr[i]==M)
            break;
        else if (arr[i]%2){
            i+=L;
            if (i>=N)
                i%=N;
        }
        else{
            i-=L;
            if (i<0)
                i+=N;
        }
    }
    cout << ans;
    return 0;
}