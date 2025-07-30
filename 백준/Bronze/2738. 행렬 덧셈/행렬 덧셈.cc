#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, a[105][105], b[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> a[i][j];
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> b[i][j];
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cout << a[i][j]+b[i][j] << " ";
        cout << "\n";
    }
    return 0;
}