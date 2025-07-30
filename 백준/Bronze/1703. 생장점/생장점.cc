#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    while (1){
        ll N, ans=1;
        cin >> N;
        if (N==0)
            break;
        for (int i=0;i<N;i++){
            ll a, b;
            cin >> a >> b;
            ans=ans*a-b;
        }
        cout << ans << "\n";
    }
    return 0;
}