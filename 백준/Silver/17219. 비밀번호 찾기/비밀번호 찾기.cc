#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string,string> m;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        string a, b;
        cin >> a >> b;
        m[a]+=b;
    }
    for (int i=0;i<M;i++){
        string a;
        cin >> a;
        cout << m[a] << "\n";
    }
    return 0;
}