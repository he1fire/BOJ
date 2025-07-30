#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, human[15], tmp[15], visit[15], ans=INF;
vector<ll> arr[15];
int BFS(int chk){
    queue<ll> q;
    fill(&visit[0],&visit[14],0);
    for (int i=1;i<=N;i++){
        if (tmp[i]==chk){
            q.push(i);
            visit[i]=1;
            break;
        }
    }
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (auto ax:arr[x]){
            if (tmp[ax]==chk && visit[ax]==0){
                q.push(ax);
                visit[ax]=1;
            }
        }
    }
    for (int i=1;i<=N;i++){
        if (tmp[i]==chk && visit[i]==0)
            return 0;
    }
    return 1;
}
int main(){
    cin >> N;
    M=(1<<N);
    for (int i=1;i<=N;i++)
        cin >> human[i];
    for (int i=1;i<=N;i++){
        ll a;
        cin >> a;
        for (int j=0;j<a;j++){
            ll b;
            cin >> b;
            arr[i].push_back(b);
        }
    }
    for (int i=1;i<M-1;i++){
        fill (&tmp[0],&tmp[14],0);
        for (int j=1,k=1;j<=M;j<<=1,k++){
            if ((j&i)!=0)
                tmp[k]=1;
        }
        if (BFS(0)&&BFS(1)){
            ll a=0, b=0;
            for (int j=1;j<=N;j++)
                (tmp[j] ? a: b)+=human[j];
            ans=min(ans,abs(a-b));
        }
    }
    cout << (ans==INF ? -1 : ans);
    return 0;
}