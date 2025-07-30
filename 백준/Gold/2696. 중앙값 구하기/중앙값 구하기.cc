#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
int T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        int N, x=0;
        vector<int> arr, ans;
        cin >> N;
        for (int i=0;i<N;i++){
            int a;
            cin >> a;
            arr.push_back(a);
            if (i%2==0){
                sort(arr.begin(),arr.end());
                ans.push_back(arr[i/2]);
            }
        }
        cout << ans.size();
        for (int i=0;i<ans.size();i++){
            if (i>=x){
                x+=10;
                cout << "\n";
            }
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}