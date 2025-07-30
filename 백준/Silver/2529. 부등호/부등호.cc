#include <bits/stdc++.h>
#define ll long long
#define INF 1e15+7
using namespace std;
ll N, visited[10], mn=INF, mx=-1;
vector<char> arr;
void backtrack(ll now, ll depth){
    if (depth==N+1){
        mx=max(mx,now);
        mn=min(mn,now);
        return ;
    }
    for (int i=0;i<=9;i++){
        if (visited[i]==0){
            if (depth==0 || (arr[depth-1]=='>' && now%10>i) || (arr[depth-1]=='<' && now%10<i)){
                visited[i]=1;
                now=now*10+i;
                backtrack(now, depth+1);
                now/=10;
                visited[i]=0;
            }
        }
    }
}
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        char a;
        cin >> a;
        arr.push_back(a);
    }
    backtrack(0,0);
    cout << mx << "\n";
    if (pow(10,N)>mn)
        cout << "0";
    cout << mn;
    return 0;
}