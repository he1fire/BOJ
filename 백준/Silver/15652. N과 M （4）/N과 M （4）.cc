#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> v;
int N, M;
void backtrack(int x, int cost){
    if (cost==M){
        for (int i=0;i<M;i++)
            cout << v[i] << " ";
        cout << "\n";
        return;
    }
    for (int i=x;i<=N;i++){
        v.push_back(i);
        backtrack(i,cost+1);
        v.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    backtrack(1,0);
    return 0;
}
