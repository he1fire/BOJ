#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N >> M;
        ll arr[3]={0,};
        for (ll i=1,j=M;j;i*=8,j/=10){
            if (j%10>7){
                arr[0]=0;
                break;
            }
            arr[0]+=i*(j%10);
        }
        for (ll i=1,j=M;j;i*=10,j/=10)
            arr[1]+=i*(j%10);
        for (ll i=1,j=M;j;i*=16,j/=10)
            arr[2]+=i*(j%10);
        cout << N << " ";
        for (auto x:arr)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}