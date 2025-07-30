#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, K, arr[1005], ans;
int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=1;i<=1000;i++){
        ll cnt=0;
        for (int j=0;j<N;j++){
            if (arr[j]==i+j*K)
                cnt++;

        }
        ans=max(ans,cnt);
    }
    cout << N-ans;
    return 0;
}