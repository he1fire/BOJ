#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, ans;
vector<pair<int,int> > v;
int chk(int x, int y){
    int a=1;
    for (int i=0;i<v.size();i++){
        int dx=v[i].first, dy=v[i].second;
        if (x==dx || y==dy || abs(dx-x)==abs(dy-y))
            a=0;
    }
    return a;
}
void backtrack(int x, int y) {
    if (x==N-1){
        ans++;
        return;
    }
    v.push_back({x,y});
    for (int i=0;i<N;i++){
        if (chk(x+1,i))
            backtrack(x+1,i);
    }
    v.pop_back();
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        backtrack(0,i);
    cout << ans;
    return 0;
}