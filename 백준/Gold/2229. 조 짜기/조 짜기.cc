#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1005], visited[1005][1005];
ll DP(ll st, ll ed){
    if (visited[st][ed]!=-1)
        return visited[st][ed];
    else{
        ll tmp=0, a=-1, b=10001;
        for (int i=st;i<=ed;i++){
            a=max(arr[i],a);
            b=min(arr[i],b);
        }
        tmp=a-b;
        for (int i=st;i<ed;i++){
            tmp=max(DP(st,i)+DP(i+1,ed),tmp);
        }
        return visited[st][ed]=tmp;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(&visited[0][0],&visited[1004][1005],-1);
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    cout << DP(0,N-1);
    return 0;
}