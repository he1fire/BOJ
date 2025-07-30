#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=0;
string arr[55];
ll BFS(ll st){
    ll visit[55], ret=0;
    fill(&visit[0],&visit[54],-1);
    queue<ll> q;
    q.push(st);
    visit[st]=0;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        if (visit[x]>=2)
            break;
        for (int i=0;i<N;i++){
            if (arr[x][i]=='Y' && visit[i]==-1){
                visit[i]=visit[x]+1;
                q.push(i);
                ret++;
            }
        }
    }
    return ret;
}
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    for (int i=0;i<N;i++){
        ans=max(ans,BFS(i));
    }
    cout << ans;
    return 0;
}