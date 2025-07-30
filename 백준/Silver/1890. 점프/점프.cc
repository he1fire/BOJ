#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[105][105], visit[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    visit[0][0]=1;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            ll x=arr[i][j];
            if (x!=0 && i+x<N)
                visit[i+x][j]+=visit[i][j];
            if (x!=0 && j+x<N)
                visit[i][j+x]+=visit[i][j];
        }
    }
    cout << visit[N-1][N-1];
    return 0;
}