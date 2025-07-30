#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[35];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0,tmp=1;i<16;i++){
        arr[i]=tmp;
        tmp*=2;
    }
    ans=N%(ll)pow(2,16);
    N/=pow(2,16);
    if (N)
        ans++;
    for (int i=0,tmp=1;i<16;i++){
        if (N&tmp)
            ans+=arr[15-i];
        tmp*=2;
    }
    cout << ans;
    return 0;
}