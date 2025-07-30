#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<int,int> > v;
int N, M, ans;
void backtrack(int day, int cost){
    ans=max(ans,cost);
    for (int i=day;i<N;i++){
        if (i+v[i].first<=N){
            backtrack(i+v[i].first,cost+v[i].second);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    backtrack(0,0);
    cout << ans;
    return 0;
}
