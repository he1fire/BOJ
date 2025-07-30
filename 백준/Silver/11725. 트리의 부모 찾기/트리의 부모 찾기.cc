#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, parent[100005];
vector<int> v[100005];
queue<int> q;
void BFS() {
    q.push(1);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=0;i<v[x].size();i++){
            int dx=v[x][i];
            if (parent[dx]==0){
                parent[dx]=x;
                q.push(dx);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N-1;i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    BFS();
    for (int i=2;i<=N;i++)
        cout << parent[i] << "\n";
    return 0;
}