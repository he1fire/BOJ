#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, arr[20][20], x, y;
void f(pll a, pll b){
    for (int i=a.first;i<=b.first;i++){
        for (int j=a.second;j<=b.second;j++){
            if (i==a.first && j==a.second)
                continue;
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
}
int main(){
    cin >> N >> M >> T;
    x=(T-1)/M+1, y=T%M;
    if (!y)
        y+=M;
    arr[1][1]=1;
    if (T){
        f({1,1},{x,y});
        f({x,y},{N,M});
    }
    else
        f({1,1},{N,M});
    cout << arr[N][M];
    return 0;
}