#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, food, menu[3], ans=1;
map<string,int> x, y, z;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> T;
    for (int i=0;i<N;i++){
        string a;
        ll b;
        cin >> a >> b;
        x[a]=b;
    }
    for (int i=0;i<M;i++){
        string a;
        ll b;
        cin >> a >> b;
        y[a]=b;
    }
    for (int i=0;i<T;i++){
        string a;
        cin >> a;
        z[a]=1;
    }
    cin >> food;
    for (int i=0;i<food;i++){
        string a;
        cin >> a;
        if (x.find(a)!=x.end()){
            menu[0]+=x[a];
        }
        if (y.find(a)!=y.end()){
            menu[1]+=y[a];
        }
        if (z.find(a)!=z.end()){
            menu[2]+=z[a];
        }
    }
    if (menu[2]>1)
        ans=0;
    if (menu[2]==1 && menu[0]+menu[1]<50000)
        ans=0;
    if (menu[1]>0 && menu[0]<20000)
        ans=0;
    cout << (ans ? "Okay" : "No");
    return 0;
}