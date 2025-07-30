#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, m, M, T, R, ans, now;
int main(){
    cin >> N >> m >> M >> T >> R;
    now=m;
    if (m+T>M){
        cout << "-1";
        return 0;
    }
    for (int i=1;i<=N;i++){
        if (now+T>M){
            while (now+T>M){
                ans++;
                now-=R;
                if (now<m)
                    now=m;
            }
        }
        ans++;
        now+=T;
    }
    cout << ans;
    return 0;
}