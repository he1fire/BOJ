#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define INF 1e9+7
using namespace std;
ll N, mx[20005], mn[20005];
int main(){
    cin >> N;
    mn[2]=mx[2]=1;
    mn[3]=mx[3]=2;
    for (int a=2,b=3;a+b<=N;){
        mx[a+b]=mx[a]+mx[b];
        ll tmp=a;
        a+=b;
        b=tmp;
    }
    for (int i=4;i<=N;i++){
        mn[i]=1+mn[i-2];
        ll x=0;
        for (int j=2;j<=i-2;j++)
            x=max(x,mx[j]+mx[i-j]);
        mx[i]=max(mx[i],x);
    }
    cout << mn[N] << " " << mx[N];
    return 0;
}