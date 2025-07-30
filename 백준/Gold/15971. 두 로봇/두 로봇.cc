#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int> > arr[100001];
vector<int> v;
int st, en, visit[100001], clear=0, ma=0, cnt=0;
int DFS (int x) {
    visit[x]=1;
    if (visit[en]){
        clear=1;
        return 0;
    }
    for (int i=0;i<arr[x].size();i++){
        int next=arr[x][i].first;
        int length=arr[x][i].second;
        v.push_back(length);
        if (visit[next]==0)
            DFS(next);
        if (clear)
            break;
        else
            v.pop_back();
    }
    return 0;
}
int main() {
    int N;
    cin >> N >> st >> en;
    for (int i=0;i<N-1;i++){
        int a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back(make_pair(b,c));
        arr[b].push_back(make_pair(a,c));
    }
    DFS(st);
    for (int i=0;i<v.size();i++){
        cnt+=v[i];
        ma=max(ma,v[i]);
    }
    cout << cnt-ma << " ";
    return 0;
}