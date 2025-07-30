#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        ll a, cnt=0;
        cin >> a;
        for (int j=0;j<N;j++){
            if (arr[j]==0)
                cnt++;
            if (cnt==a+1){
                arr[j]=i;
                break;
            }
        }
    }
    for (int i=0;i<N;i++)
        cout << arr[i] << " ";
    return 0;
}