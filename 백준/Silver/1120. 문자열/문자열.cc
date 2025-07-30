#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
string A, B;
ll ans=INF;
int main(){
    cin >> A >> B;
    for (int i=0;i<=B.size()-A.size();i++){
        ll cnt=0;
        for (int j=0;j<A.size();j++){
            if (A[j]!=B[i+j])
                cnt++;
        }
        ans=min(ans,cnt);
    }
    cout << ans;
    return 0;
}