#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, chk, ans[100];
ll g(ll now){
    ll ret=1;
    for (int i=1;i<=(now+1)/2;i++){
        ll tmp=i;
        for (int j=0;j<i;j++){
            if (ans[now-j]==ans[now-i-j])
                tmp--;
        }
        if (tmp==0)
            ret=0;
    }
    return ret;
}
void f(ll now){
    if (chk)
        return;
    if (now==N){
        for (int i=0;i<N;i++)
            cout << ans[i];
        chk=1;
        return;
    }
    for (int i=1;i<=3;i++){
        char x=i;
        ans[now]=x;
        if (g(now))
            f(now+1);
        ans[now]=0;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    f(0);
    return 0;
}