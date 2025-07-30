#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{
    ll st, ed, idx;
    ABC() {}
    ABC(ll st, ll ed, ll idx) : st(st), ed(ed), idx(idx) {}
};
bool cmp(ABC x, ABC y){
    if (x.st!=y.st)
        return x.st<y.st;
    return x.ed>y.ed;
}
ll N, M, mn=1e9+7, mx=-1;
vector<ABC> arr;
vector<ll> ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back({a,b,i+1});
        if (a>b)
            mn=min(mn,a);
    }
    if (mn==1e9+7)
        mn=0;
    for (int i=0;i<M;i++){
        if (arr[i].st<mn){
            arr[i].ed+=N-mn;
            arr[i].st+=N-mn;
        }
        else{
            if (arr[i].st<arr[i].ed)
                arr[i].ed-=mn;
            else
                arr[i].ed+=N-mn;
            arr[i].st-=mn;
        }
    }
    sort(arr.begin(),arr.end(),cmp);
    for (auto x:arr){
        if (x.ed>mx){
            ans.push_back(x.idx);
            mx=x.ed;
        }
    }
    sort(ans.begin(),ans.end());
    for (auto i:ans)
        cout << i << " ";
    return 0;
}