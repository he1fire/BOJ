#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll color, size, idx;
    ABC() {}
    ABC(ll color, ll size, ll idx) : color(color), size(size), idx(idx) {}
};
bool cmp(ABC x, ABC y){
    if (x.size==y.size)
        return x.color<y.color;
    return x.size<y.size;
}
vector<ABC> arr;
ll N, cnt[200005], ans[200005], same;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back({a,b,i});
    }
    sort(arr.begin(),arr.end(),cmp);
    for (int i=0;i<N;i++){
        ll tmp=i;
        while(tmp<N && arr[tmp].size==arr[i].size)
            tmp++;
        for (int j=i;j<tmp;j++)
            ans[arr[j].idx]=cnt[0]-cnt[arr[j].color];
        for (int j=i;j<tmp;j++)
            cnt[arr[j].color]+=arr[j].size;
        cnt[0]+=arr[i].size*(tmp-i);
        i=tmp-1;
    }
    for (int i=0;i<N;i++)
        cout << ans[i] << "\n";
    return 0;
}