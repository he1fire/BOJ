#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[4000005];
void BFS(){
    fill(&arr[0],&arr[4000004],-1);
    queue<ll> q;
    arr[1]=0;
    q.push(1);
    while(!q.empty()){
        ll x=q.front();
        q.pop();
        if (x-1>0 && arr[x-1]==-1){
            q.push(x-1);
            arr[x-1]=arr[x]+1;
        }
        if (x*2<=4000000 && arr[x*2]==-1){
            q.push(x*2);
            arr[x*2]=arr[x]+1;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    BFS();
    while (N--){
        ll a;
        cin >> a;
        cout << arr[a] << "\n";
    }
    return 0;
}