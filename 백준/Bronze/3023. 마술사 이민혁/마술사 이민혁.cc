#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
ll N, M;
char arr[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
            arr[2*N-1-i][j]=arr[i][j];
            arr[i][2*M-1-j]=arr[i][j];
            arr[2*N-1-i][2*M-1-j]=arr[i][j];
        }
    }
    ll a, b;
    cin >> a >> b;
    arr[a-1][b-1]=='.' ? arr[a-1][b-1]='#' : arr[a-1][b-1]='.';
    for (int i=0;i<2*N;i++){
        for (int j=0;j<2*M;j++)
            cout << arr[i][j];
        cout << "\n";
    }
    return 0;
}