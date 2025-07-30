#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1005], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    while (1){
        ll mx=-1, who=-1;
        for (int i=1;i<N;i++){
            if (arr[i]>mx){
                mx=arr[i];
                who=i;
            }
        }
        if (arr[0]>mx)
            break;
        ans++;
        arr[0]++;
        arr[who]--;
    }
    cout << ans;
    return 0;
}