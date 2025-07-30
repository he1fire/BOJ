#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M, arr[2][55], ans[2]={0,};
    cin >> N >> M;
    fill(&arr[0][0],&arr[1][55],0);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            char a;
            cin >> a;
            if (a=='X'){
                arr[0][i]=1;
                arr[1][j]=1;
            }
        }
    }
    for (int i=0;i<N;i++){
        if (arr[0][i]==0)
            ans[0]++;
    }
    for (int i=0;i<M;i++){
        if (arr[1][i]==0)
            ans[1]++;
    }
    cout << max(ans[0],ans[1]);
    return 0;
}