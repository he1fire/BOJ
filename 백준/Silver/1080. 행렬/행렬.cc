#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
string x[55], y[55];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> x[i];
    for (int i=0;i<N;i++)
        cin >> y[i];
    for (int i=0;i<N-2;i++){
        for (int j=0;j<M-2;j++){
            if (x[i][j]!=y[i][j]){
                ans++;
                for (int a=i;a<i+3;a++){
                    for (int b=j;b<j+3;b++){
                        x[a][b]=='0' ? x[a][b]='1' : x[a][b]='0';
                    }
                }
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (x[i][j]!=y[i][j]){
                cout << "-1";
                return 0;
            }
        }
    }
    cout << ans;
    return 0;
}