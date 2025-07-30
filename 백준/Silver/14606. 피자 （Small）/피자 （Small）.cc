#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[20];
int main(){
    cin >> N;
    for (int i=2;i<=N;i++){
        ll cnt=0;
        for (int j=1;j<i;j++)
            cnt=max(cnt,j*(i-j)+arr[i-j]+arr[j]);
        arr[i]=cnt;
    }
    cout << arr[N];
    return 0;
}