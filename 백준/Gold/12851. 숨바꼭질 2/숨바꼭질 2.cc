#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, arr[100005], cnt;
queue<ll> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    fill(&arr[0],&arr[100004],INF);
    q.push(N);
    arr[N]=0;
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        if (x==M){
            cnt++;
            continue;
        }
        if (x+1<=100000 && arr[x+1]>=arr[x]+1){
            q.push(x+1);
            arr[x+1]=arr[x]+1;
        }
        if (x-1>=0 && arr[x-1]>=arr[x]+1){
            q.push(x-1);
            arr[x-1]=arr[x]+1;
        }
        if (x*2<=100000 && arr[x*2]>=arr[x]+1){
            q.push(x*2);
            arr[x*2]=arr[x]+1;
        }
    }
    cout << arr[M] << "\n" << cnt;
    return 0;
}