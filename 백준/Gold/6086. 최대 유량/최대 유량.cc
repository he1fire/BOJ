#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, C[55][55], F[55][55], visit[55], ans;
/*int DFS(int n, int flow){
    visit[n]=1;
    int cnt=0;
    if (n==25)
        return flow;
    for (int i=0;i<55;i++){
        if (C[n][i]>F[n][i] && !visit[i]){
            cnt=DFS(i,min(flow,C[n][i]-F[n][i]));
            if (cnt){
                F[n][i]+=cnt;
                F[i][n]-=cnt;
                return cnt;
            }
        }
    }
    return 0;
}*/
int FordFulkerson()
{
    int ret = 0;
    while(1)
    {
        queue<int> q;
        q.push(0);
        vector<int> p(60, -1);
        p[0]=0;

        while(!q.empty() && p[25] == -1)
        {
            int n = q.front(); q.pop();
            for(int i=0; i<55; i++)
            {
                if (C[n][i]-F[n][i]>0 && p[i] == -1)
                {
                    q.push(i);
                    p[i]=n;
                }
            }
        }

        if (p[25] == -1) break;

        int flow = 987654321;
        for(int i=25; i!=0; i=p[i])
            flow = min(flow, C[p[i]][i]-F[p[i]][i]);

        for(int i=25; i!=0; i=p[i])
        {
            F[p[i]][i]+=flow;
            F[i][p[i]]-=flow;
        }
        ret += flow;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        char a, b;
        int c;
        cin >> a >> b >> c;
        if ('A'<=a && a<='Z')
            a-='A';
        else
            a=a-'a'+26;
        if ('A'<=b && b<='Z')
            b-='A';
        else
            b=b-'a'+26;
        C[a][b]+=c;
        C[b][a]+=c;
    }
    /*while (1){
        for (int i=0;i<55;i++)
            visit[i]=0;
        int a=DFS(0,1001);
        if (a)
            ans+=a;
        else
            break;
    }*/
    cout << FordFulkerson();
    return 0;
}
