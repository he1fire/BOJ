#include <bits/stdc++.h>
#define ll long long
#define PI 3.14159265358979323846
using namespace std;
struct ABC{
    ll x, y;
    double cost;
    ABC() {}
    ABC(ll x, ll y, double cost): x(x), y(y), cost(cost) {}
};
struct ABCD{
    ll a, b, c;
    ABCD() {}
    ABCD(ll a, ll b, ll c): a(a), b(b), c(c) {}
};
bool operator<(ABC x, ABC y){
    return x.cost > y.cost;
}
ll N, arr[1005];
vector<ABCD> v;
priority_queue<ABC> pq;
double ans;
ll Find(ll x){
    if (x==arr[x])
        return x;
    return arr[x]=Find(arr[x]);
}
void Union(ll x, ll y){
    arr[Find(x)]=Find(y);
}
double f(ll x, ll y){
    double ret=0;
    double d=(v[x].a-v[y].a)*(v[x].a-v[y].a)+(v[x].b-v[y].b)*(v[x].b-v[y].b);
    double r=(v[x].c-v[y].c)*(v[x].c-v[y].c);
    double angle=acos(sqrt(r/d))*2;
    if (v[x].c+v[y].c>=sqrt(d))
        return 0;
    ret+=sqrt(d-r)*2;
    ret+=max(v[x].c,v[y].c)*(2*PI-angle)+min(v[x].c,v[y].c)*angle;
    return ret;
}

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            pq.push({i,j,f(i,j)});
        }
    }
    for (int i=0;i<=N;i++)
        arr[i]=i;
    while (!pq.empty()){
        int x=pq.top().x, y=pq.top().y;
        double cost=pq.top().cost;
        pq.pop();
        if (Find(x)==Find(y))
            continue;
        Union(x,y);
        ans+=cost;
    }
    printf("%.9lf", ans);
    return 0;
}