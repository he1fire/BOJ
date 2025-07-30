#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, M, ans, parent[100005];
queue<int> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> parent[i];
    cin >> M;
    for (int i=0;i<N;i++){
        if (parent[i]==-1 && i!=M)
        q.push(i);
    }
    while (!q.empty()){
        int x=q.front(), cnt=1;
        q.pop();
        for (int i=0;i<N;i++){
            if (parent[i]==x && i!=M){
                q.push(i);
                cnt=0;
            }
        }
        if (cnt)
            ans++;
    }
    cout << ans;
    return 0;
}