#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, ans=INF;
int main(){
    cin >> N;
    while (N--){
        ll a, b;
        cin >> a >> b;
        if (a<=b)
            ans=min(ans,b);
    }
    cout << (ans==INF ? -1 : ans);
    return 0;
} 