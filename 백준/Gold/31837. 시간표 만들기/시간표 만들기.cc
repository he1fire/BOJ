#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{ll cost, s, e;};
ll N;
vector<ABC> v[20], ans;
ll g(string s){
    return (s[0]-'0')*10*60+(s[1]-'0')*60+(s[3]-'0')*10+(s[4]-'0');
}
ABC f(ll a, ll b, string c, string d){
    ABC ret;
    ret.cost=a;
    ret.s=b*100000+g(c);
    ret.e=b*100000+g(d);
    return ret;
}
ll chk(ABC x, ABC y){
    if (x.s>y.s)
        swap(x,y);
    if (x.e>y.s)
        return 1;
    return 0;
}
ll backtrack(ll depth){
    ll ret=0;
    if (depth==N){
        ll tmp=0;
        for (int i=0;i<N;i++){
            tmp+=ans[i].cost;
            for (int j=i+1;j<N;j++){
                if (chk(ans[i],ans[j]))
                    return 0;
            }
        }
        if (tmp!=22)
            return 0;
        return 1;
    }
    else{
        for (int i=0;i<v[depth].size();i++){
            ans.push_back(v[depth][i]);
            ret+=backtrack(depth+1);
            ans.pop_back();
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll x;
        cin >> x;
        for (int j=0;j<x;j++){
            ll a, b;
            string c, d;
            cin >> a >> b >> c >> d;
            v[i].push_back(f(a,b,c,d));
        }
        v[i].push_back({0,0,0});
    }
    cout << backtrack(0);
    return 0;
}