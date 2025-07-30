#include <iostream>
#include <queue>
using namespace std;
int N, M;
int arr[1000005], broken[15];
queue<int> q;
priority_queue<pair<int,int> > pq;
void BFS() {
    fill(&arr[0], &arr[1000004], -1);
    for (int i=0;i<=9;i++){
        if (broken[i]==0){
            arr[i]=1;
            q.push(i);
        }
    }
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=0;i<=9;i++){
            int ax=x*10+i;
            if (ax>=1000000 || broken[i] || arr[ax]!=-1)
                continue;
            q.push(ax);
            arr[ax]=arr[x]+1;
        }
    }
}
void DIK() {
    arr[100]=0;
    for (int i=0;i<=1000000;i++){
        if (arr[i]!=-1)
            pq.push({-arr[i],i});
    }
    while (!pq.empty()){
        int x=pq.top().second;
        pq.pop();
        if (x>0 && (arr[x-1]==-1 || arr[x-1]>arr[x]+1)){
            arr[x-1]=arr[x]+1;
            pq.push({-arr[x-1], x-1});
        }
        if (x<500000 && (arr[x+1]==-1 || arr[x+1]>arr[x]+1)){
            arr[x+1]=arr[x]+1;
            pq.push({-arr[x+1], x+1});
        }
    }
}
int main() {
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a;
        cin >> a;
        broken[a]=1;
    }
    
    BFS();
    DIK();
    cout << arr[N];
    return 0;
}