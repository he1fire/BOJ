#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<pair<int,int> > arr[10001];
int cnt=0, st=1;
void BFS(){
    queue<pair<int,int> > q;
    int visit[10001]={0};
    visit[st]=-1;
    for (int i=0;i<arr[st].size();i++){
        int a=arr[st][i].first;
        int b=arr[st][i].second;
        q.push(make_pair(a,b));
    }
    while (!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if (visit[y]==0){
            visit[y]=x;
            for (int i=0;i<arr[y].size();i++){
                int ax=arr[y][i].first;
                int ay=arr[y][i].second;
                ax+=visit[y];
                q.push(make_pair(ax,ay));
            }
        }
    }
    for (int i=0;i<10001;i++){
        if (visit[i]>cnt){
            cnt=visit[i];
            st=i;
        }
    }
}
int main() {
    int N;
    cin >> N;
    for (int i=0;i<N-1;i++){
        int a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back(make_pair(c,b));
        arr[b].push_back(make_pair(c,a));
    }
    BFS();
    BFS();
    cout << cnt;
    return 0;
}