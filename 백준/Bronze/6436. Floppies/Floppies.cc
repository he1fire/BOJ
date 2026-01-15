#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=1;cin >> N;i++){
        if (!N)
            break;
        N=(((N+1)/2)*3+1)/2;
        ans=((N+61)/62+29999)/30000;
        cout << "File #" << i << "\nJohn needs " << ans << " floppies.\n\n"; 
    }
    return 0;
}