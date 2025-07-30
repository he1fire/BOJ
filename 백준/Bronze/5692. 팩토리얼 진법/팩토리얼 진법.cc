#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[5]={1,2,6,24,120};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ll ans=0;
        cin >> N;
        if (!N)
            break;
        for (int i=0;N>0;i++,N/=10)
            ans+=arr[i]*(N%10);
        cout << ans << "\n";
    }
    return 0;
}