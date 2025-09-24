#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll idx, cnt;
};
ll N, ans;
deque<st> x, y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (a>0)
            x.push_back({i,a});
        else
            y.push_back({i,-a});
        while (!x.empty() && !y.empty()){
            st a=x.front(), b=y.front();
            x.pop_front();
            y.pop_front();
            ans+=abs((a.idx-b.idx)*min(a.cnt,b.cnt));
            if (a.cnt>b.cnt)
                x.push_front({a.idx,a.cnt-b.cnt});
            else if (b.cnt>a.cnt)
                y.push_front({b.idx,b.cnt-a.cnt});
        }
    }
    cout << ans;
    return 0;
}