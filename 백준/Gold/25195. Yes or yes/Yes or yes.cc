#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, S, chk[100005], visited[100005];
vector<ll> arr[100005];
ll DFS(ll now){
    ll ret=0, cnt=0;
    for (int i=0;i<arr[now].size();i++){
        cnt++;
        if (!chk[arr[now][i]])
            ret+=DFS(arr[now][i]);
    }
    if (cnt==0)
        ret++;
    return ret;
}
int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
    }
    cin >> S;
    for (int i=0;i<S;i++){
        ll a;
        cin >> a;
        chk[a]=1;
    }
    if (chk[1])
        cout << "Yes";
    else
        cout << (DFS(1) ? "yes" : "Yes");
    return 0;
}