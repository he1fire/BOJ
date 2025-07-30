#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        string S, arr="/-\\(@?>&%";
        cin >> S;
        if (S=="#")
            break;
        ll ans=0;
        for (int i=0;i<S.size();i++){
            for (int j=0;j<arr.size();j++){
                if (S[i]==arr[j]){
                    ans*=8;
                    ans+=j-1;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}