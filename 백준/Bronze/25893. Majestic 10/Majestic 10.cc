#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S[4]={"zilch", "double", "double-double", "triple-double"};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll arr[3], cnt=0;
        for (ll i=0;i<3;i++){
            cin >> arr[i];
            cout << arr[i] << " ";
            cnt+=(arr[i]>=10);
        }
        cout << "\n" << S[cnt] << "\n\n";
    }
    return 0;
}