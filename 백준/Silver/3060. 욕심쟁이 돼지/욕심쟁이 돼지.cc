#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll N, cnt=0, arr[6]={0};
        cin >> N;
        for (int i=0;i<6;i++){
            cin >> arr[i];
            cnt+=arr[i];
        }
        for (int i=1;1;i++,cnt*=4){
            if (cnt>N){
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}