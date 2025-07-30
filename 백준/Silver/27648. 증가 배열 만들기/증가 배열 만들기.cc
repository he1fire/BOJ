#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    if (N+M-1>K)
        cout << "NO";
    else{
        cout << "YES\n";
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                cout << i+j+1 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}