#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, chk=1;
string s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> s >> M;
    for (int i=0;i<N;i++){
        if (N-i-1<M && s[i]=='1')
            chk=0;
    }
    cout << (chk ? "YES" : "NO");
    return 0;
}