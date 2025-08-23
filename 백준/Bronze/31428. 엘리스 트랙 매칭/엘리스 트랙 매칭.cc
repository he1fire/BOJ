#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
char C;
vector<char> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        char a;
        cin >> a;
        v.push_back(a);
    }
    cin >> C;
    for (auto x:v){
        if (x==C)
            ans++;
    }
    cout << ans;
    return 0;
}