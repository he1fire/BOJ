#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, arr[1000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    fill(&arr[0],&arr[1000004],INF);
    arr[N]=0;
    for (int i=N;i<=M;i++){
        if (i+1<=M)
            arr[i+1]=min(arr[i+1],arr[i]+1);
        if (i*2<=M)
            arr[i*2]=min(arr[i*2],arr[i]+1);
    }
    cout << arr[M];
    return 0;
}