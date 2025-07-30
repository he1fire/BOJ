#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, visit[10];
deque<ll> dq;
void f(ll y){
    if (y){
        for (int i=1;i<=N;i++){
            if (visit[i]==0){
                visit[i]=1;
                dq.push_back(i);
                f(y-1);
                visit[i]=0;
                dq.pop_back();
            }
        }
    }
    else{
        for (auto i:dq)
            cout << i << " ";
        cout << "\n";
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N >> M;
    f(M);
    return 0;
}