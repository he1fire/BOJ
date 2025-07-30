#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, M, A[205], B[205], visit[205], ans;
vector<int> arr[205];
int DFS(int a){
    visit[a]=1;
    for (int i=0;i<arr[a].size();i++){
        int b=arr[a][i];
        if (B[b]==-1 || !visit[B[b]] && DFS(B[b])){
            A[a]=b;
            B[b]=a;
            return 1;
        }
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        for (int j=0;j<a;j++){
            int b;
            cin >> b;
            arr[i].push_back(b);
        }
    }
    fill(&A[0],&A[204],-1);
    fill(&B[0],&B[204],-1);
    for (int i=0;i<N;i++){
        if (A[i]==-1){
            fill(&visit[0],&visit[204],0);
            if (DFS(i))
                ans++;
        }
    }
    cout << ans;
    return 0;
}