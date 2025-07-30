#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[35][35];
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, ans=1;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    while (1){
        int chk=0, a[35]={0}, b[35]={0};
        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                if (arr[i][j]==M){
                    a[i]++;
                    b[j]++;
                }
            }
        }
        for (int i=0;i<N;i++){
            if (a[i]>N/2 && a[i]!=N){
                chk=1;
                for (int j=0;j<N;j++)
                    arr[i][j]=M;
            }
            if (b[i]>N/2 && b[i]!=N){
                chk=1;
                for (int j=0;j<N;j++)
                    arr[j][i]=M;
            }
        }
        if (!chk)
            break;
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j]!=M)
                ans=0;
        }
    }
    cout << ans;
    return 0;
}
