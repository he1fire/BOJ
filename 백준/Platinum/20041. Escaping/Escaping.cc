#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, ans, x, y, chk[4]; // udlr
vector<pll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back({a,b});
    }
    cin >> x >> y;
    for (auto i:arr){
        ll a=i.first, b=i.second;
        if (a-x>=0 && b-y>=0){
            if (a-x>=b-y)
                chk[3]=1;
            if (b-y>=a-x)
                chk[0]=1;
        }
        if (a-x>=0 && b-y<=0){
            if (a-x>=abs(b-y))
                chk[3]=1;
            if (abs(b-y)>=a-x)
                chk[1]=1;
        }
        if (a-x<=0 && b-y<=0){
            if (abs(a-x)>=abs(b-y))
                chk[2]=1;
            if (abs(b-y)>=abs(a-x))
                chk[1]=1;
        }
        if (a-x<=0 && b-y>=0){
            if (abs(a-x)>=b-y)
                chk[2]=1;
            if (b-y>=abs(a-x))
                chk[0]=1;
        }
    }
    for (auto i:chk)
        ans+=i;
    
    cout << (ans==4 ? "NO" : "YES");
    return 0;
}