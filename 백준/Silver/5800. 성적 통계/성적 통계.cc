#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    for (int i=1;i<=N;i++){
        ll M, arr[55], mx=-1;
        cin >> M;
        for (int j=0;j<M;j++)
            cin >> arr[j];
        sort(arr,arr+M);
        for (int j=0;j<M;j++){
            if (j>0)
                mx=max(mx,abs(arr[j]-arr[j-1]));
        }
        cout << "Class " << i << "\nMax " << arr[M-1] << ", Min " << arr[0] << ", Largest gap " << mx << "\n";
    }
    return 0;
}