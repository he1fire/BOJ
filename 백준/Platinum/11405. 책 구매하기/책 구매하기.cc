#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
int N, M, C[205][205], D[205][205], F[205][205];// C 간선유량 D 간선비용 F 흐르는 유량
int S=0, E=201, ans=0;
vector<int> arr[205];
int FordFulkerson(){
    int ret=0;
    while(1){
        queue<int> q;
        vector<int> p(205,-1), dist(205,INF);
        bool inq[205]={0};
        q.push(S);
        inq[S]=1;
        dist[S]=0;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            inq[curr]=0;
            for (int i=0;i<arr[curr].size();i++){
                int next=arr[curr][i];
                if (C[curr][next]>F[curr][next] && dist[next]>dist[curr]+D[curr][next]){
                    dist[next]=dist[curr]+D[curr][next];
                    p[next]=curr;
                    if (!inq[next]){
                        q.push(next);
                        inq[next]=1;
                    }
                }
            }
        }
        if (p[E]==-1)
            break;
        int flow=INF;
        for(int i=E;i!=S;i=p[i])
            flow=min(flow,C[p[i]][i]-F[p[i]][i]);
        for(int i=E;i!=S;i=p[i]){
            ret+=flow*D[p[i]][i];
            F[p[i]][i]+=flow;
            F[i][p[i]]-=flow;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=101;i<=100+N;i++){
        cin >> C[i][E];
        arr[E].push_back(i);
        arr[i].push_back(E);
    }
    for (int i=1;i<=M;i++){
        cin >> C[S][i];
        arr[S].push_back(i);
        arr[E].push_back(S);
    }
    for (int i=1;i<=M;i++){
        for (int j=101;j<=100+N;j++){
            cin >> D[i][j];
            D[j][i]=-D[i][j];
            C[i][j]=INF;
            arr[j].push_back(i);
            arr[i].push_back(j);
        }
    }
    cout << FordFulkerson();
    return 0;
}