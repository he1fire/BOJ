#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<double,double> pdd;
struct ABC{
    ll a, b;
    double x;
    ABC(){}
    ABC(ll a, ll b, double x): a(a), b(b), x(x){}
};
bool operator<(ABC a, ABC b){
    return a.x > b.x;
}
ll N, MST[105];
double ans=0;
vector<pdd> arr;
priority_queue<ABC> pq;
ll Find(ll x){
    if (x==MST[x]) return x;
    return MST[x]=Find(MST[x]);
}
void Union(ll x, ll y){
    MST[Find(x)]=Find(y);
}
int main(){
    cin >> N;
    for (int i=0;i<100;i++){
        MST[i]=i;
    }
    for (int i=0;i<N;i++){
        double a, b;
        cin >> a >> b;
        arr.push_back({a,b});
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            double len=sqrt(pow(arr[i].first-arr[j].first,2)+pow(arr[i].second-arr[j].second,2));
            pq.push(ABC(i,j,len));
        }
    }
    while (!pq.empty()){
        ABC now=pq.top();
        pq.pop();
        if (Find(now.a)==Find(now.b))
            continue;
        Union(now.a,now.b);
        ans+=now.x;
    }
    printf("%.2f", ans);
    return 0;
}