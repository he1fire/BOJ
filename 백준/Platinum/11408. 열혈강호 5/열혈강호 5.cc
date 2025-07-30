#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
int N, M, C[805][805], D[805][805], F[805][805];// C 간선유량 D 간선비용 F 흐르는 유량
int S=0, E=801, ans=0, chk=0;
vector<int> arr[805];
void FordFulkerson(){
    while(1){
        queue<int> q;
        vector<int> p(805,-1), dist(805,INF);
        bool inq[805]={0};
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
        for(int i=E;i!=S;i=p[i]){
            ans+=D[p[i]][i];
            F[p[i]][i]+=1;
            F[i][p[i]]-=1;
        }
        chk++;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        C[S][i]=1;
        arr[S].push_back(i);
        arr[E].push_back(S);
    }
    for (int i=401;i<=400+M;i++){
        C[i][E]=1;
        arr[E].push_back(i);
        arr[i].push_back(E);
    }
    for (int i=1;i<=N;i++){
        int x;
        cin >> x;
        for (int j=0;j<x;j++){
            int a, b;
            cin >> a >> b;
            a+=400;
            D[i][a]=b;
            D[a][i]=-D[i][a];
            C[i][a]=INF;
            arr[a].push_back(i);
            arr[i].push_back(a);
        }
    }
    FordFulkerson();
    cout << chk << "\n" << ans;
    return 0;
}