#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N;
deque<ll> A, B;
void f(){
    if (N==1){
        A.push_back(1);
        B.push_back(2);
    }
    else{
        for (int i=0;i<N-2;i++)
            A.push_back(2*N-4-i);
        A.push_front(2*N-3);
        A.push_back(2*N-2);
        for (int i=0;i<N-2;i++)
            B.push_back(2*N-4-i-N+2);
        B.push_front(2*N-1);
        B.push_back(2*N);
    }
}
void g(){
    ll ans=0, cnt=0;
    for (ll i=0;!A.empty() || !B.empty();i++){
        ll a=INF, b=INF, c=INF, d=INF, mn;
        if (!A.empty()){
            a=A.front();
            b=A.back();
        }
        if (!B.empty()){
            c=B.front();
            d=B.back();
        }
        mn=min({a,b,c,d});
        if (mn==a)
            A.pop_front();
        else if (mn==b)
            A.pop_back();
        else if (mn==c)
            B.pop_front();
        else if (mn==d)
            B.pop_back();
        cnt+=i;
        ans+=cnt*mn;
    }
    cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    f();
    g();
    f();
    for (ll x=A.front();!A.empty();A.pop_front(),x=A.front())
        cout << x << " ";
    cout << "\n";
    for (ll x=B.front();!B.empty();B.pop_front(),x=B.front())
        cout << x << " ";
    return 0;
}