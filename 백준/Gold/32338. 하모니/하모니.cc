#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[205][1005], ans, idx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    fill(&arr[0][0],&arr[204][1005],-1);
    while (N--){
        ll a, b, c;
        cin >> a >> b >> c;
        for (int j=M-b;j>=0;j--){
            for (int i=0;i<=200;i++){
                if (arr[i][j]!=-1)
                    arr[i+a][j+b]=max(arr[i+a][j+b],arr[i][j]+c);
            }
        }
        arr[a+100][b]=max(arr[a+100][b],c);
    }
    for (int i=0;i<=99;i++){
        for (int j=0;j<=M;j++){
            if (arr[i][j]>=ans){
                ans=arr[i][j];
                idx=i-100;
            }
        }
    }
    for (int i=200;i>=100;i--){
        for (int j=0;j<=M;j++){
            if (i==100)
                arr[i][j]*=2;
            if (arr[i][j]>=ans){
                ans=arr[i][j];
                idx=i-100;
            }
        }
    }
    cout << idx << " " << ans;
    return 0;
}