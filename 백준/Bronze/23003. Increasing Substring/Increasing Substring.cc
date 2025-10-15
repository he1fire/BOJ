#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        ll cnt=1;
        cin >> M >> S;
        cout << "Case #" << i << ": ";
        for (int j=0;j<M;j++){
            if (j>0 && S[j]>S[j-1])
                cnt++;
            else
                cnt=1;
            cout << cnt << " ";
        }
        cout << "\n";
    }
    return 0;
}