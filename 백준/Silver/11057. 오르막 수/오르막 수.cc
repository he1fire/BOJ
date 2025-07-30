#include <iostream>
#define INF 987654321
using namespace std;
int arr[1005][105];
int main () {
    int N, ans=0;
    cin >> N;
    for (int i=0;i<=9;i++)
        arr[1][i]=1;
    for (int i=2;i<=N;i++){
        for (int j=0;j<=9;j++){
            int cnt=0;
            for (int k=0;k<=j;k++){
                cnt+=arr[i-1][k];
                cnt%=10007;
            }
            arr[i][j]=cnt;
        }
    }
    for (int i=0;i<=9;i++){
        ans+=arr[N][i];
        ans%=10007;
    }
    cout << ans;
    return 0;
}