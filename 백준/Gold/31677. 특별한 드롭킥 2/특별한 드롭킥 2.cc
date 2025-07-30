#include <bits/stdc++.h>

using ll = long long;
using namespace std;
#define MOD 1000000007
#define INF 1234567890

#define pii pair<int, int>
#define pll pair<ll, ll>
struct ABC{ll x,y;};
bool operator<(ABC a, ABC b){
    return (a.y-a.x)>(b.y-b.x);
}

//다들 디코 들어 오시고 AGJ, BEH, DFI
ll N, M, visited[200005], xx, dot;
string S;
priority_queue<ABC>pq;

int main(void){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> S;
    for (int i=0, x=-1, y=-1;i<S.size();i++){
        if (S[i]=='X'){
            x=y;
            y=i;
            if (x!=-1)
                pq.push({x,y});
            xx++;
        }
        else
            dot++;
    }
    while (!pq.empty()){
        ll x=pq.top().x, y=pq.top().y;
        pq.pop();
        if (y-x-1<=M){
            M-=y-x-1;
            xx--;
        }
    }
    cout << dot+xx*2;
}