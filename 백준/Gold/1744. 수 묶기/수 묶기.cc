#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
deque<ll> m, p;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (a>1)
            p.push_back(a);
        else if (a<1)
            m.push_back(a);
        else
            ans++;
    }
    sort(m.begin(),m.end());
    sort(p.begin(),p.end(),greater<ll>());
    while(m.size()>1){
        ans+=m[0]*m[1];
        m.pop_front();
        m.pop_front();
    }
    while(p.size()>1){
        ans+=p[0]*p[1];
        p.pop_front();
        p.pop_front();
    }
    if (!m.empty())
        ans+=m[0];
    if (!p.empty())
        ans+=p[0];
	cout << ans;
    return 0;
}