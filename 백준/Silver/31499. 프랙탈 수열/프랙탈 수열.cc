#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=1;
int main(){
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        ans=(ans*i)%M;
    cout << ans;
    return 0;
}