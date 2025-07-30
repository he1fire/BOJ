#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int N, M;
int arr[11][11], dis[11][11], ans=987654321;
vector<int> v;
struct ABC {
    int a, b, x;
    ABC() {}
    ABC(int a, int b, int x) : a(a), b(b), x(x) {}
};
bool operator<(ABC a, ABC b){
    return a.x > b.x;
}
void DIK(int X){
    priority_queue<ABC> pq;
    int visit[11]={0};
    fill(&visit[0], &visit[10], -1);
    for (int i=0;i<N;i++){
        if (i!=X)
            pq.push(ABC(X,i,arr[X][i]));
    }
    visit[X]=0;
    while (!pq.empty()){
        int x=pq.top().a, y=pq.top().b, now=pq.top().x;
        pq.pop();
        if (visit[y]==-1)
            visit[y]=now;
        for (int i=0;i<N;i++){
            if (i!=y && visit[i]==-1)
                pq.push(ABC(y,i,now+arr[y][i]));
        }
    }
    for (int i=0;i<N;i++)
        dis[X][i]=visit[i];
}
int main () {
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++)
        DIK(i);
    for (int i=0;i<N;i++){
        if (i!=M)
            v.push_back(i);
    }
    do {
        int cnt=0;
        for (int i=0;i<v.size();i++){
            if (i==0)
                cnt+=dis[M][v[i]];
            else
                cnt+=dis[v[i-1]][v[i]];
        }
        ans=min(cnt,ans);
    } while (next_permutation(v.begin(),v.end()));
    cout << ans;
    return 0;
}