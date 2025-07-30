#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, now, arr[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=1;i<=M;i++){
        ll a;
        cin >> a;
        now+=a;
        if (now>=N-1){
            cout << i;
            break;
        }
        now+=arr[now];
        if (now>=N-1){
            cout << i;
            break;
        }
    }
    return 0;
}