#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, arr[15][15], food[15][15], ans;
ll dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
deque<pll> tree[15][15];
void year(){
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            for (int k=tree[i][j].size()-1;k>=0;k--){
                if (arr[i][j]>=tree[i][j][k].first){
                    arr[i][j]-=tree[i][j][k].first;
                    tree[i][j][k].first++;
                }
                else
                    tree[i][j][k].second=0;
            }
            while (!tree[i][j].empty() && tree[i][j][0].second==0){
                arr[i][j]+=tree[i][j][0].first/2;
                tree[i][j].pop_front();
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            for (int k=0;k<tree[i][j].size();k++){
                if (tree[i][j][k].first%5==0){
                    for (int l=0;l<8;l++){
                        ll x=i+dir[l][0], y=j+dir[l][1];
                        if (x<0 || y<0 || x>=N || y>=N)
                            continue;
                        tree[x][y].push_back({1,1});
                    }
                }
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            arr[i][j]+=food[i][j];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    fill(&arr[0][0],&arr[14][15],5);
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> food[i][j];
    }
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        tree[a-1][b-1].push_back({c,1});
    }
    for (int i=0;i<K;i++)
        year();
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            ans+=tree[i][j].size();
    }
    cout << ans;
    return 0;
}