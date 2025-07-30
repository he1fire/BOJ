#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct ABC{
    ll date, x;
    ABC() {}
    ABC(ll date, ll x): date(date), x(x) {}
};
ll N;
vector<ABC> v;
ld x, y;
ll cal(ll a, ll b, ll c, ll d, ll e, ll f){
    ll ret=0, month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    ll chk=0;
    chk+=(a-2019)*365;
    if (a>2020)
        chk++;
    for (int i=1;i<b;i++){
        if (a==2020 && i==2)
            chk+=29;
        else
            chk+=month[i];
    }
    chk+=c;
    ret+=chk*24*3600+d*3600+e*60+f;
    return ret;
}
int main(){
    scanf("%lld", &N);
    if (N==0){
        cout << 0;
        return 0;
    }
    for (int i=0;i<N;i++){
        ll a, b, c, d, e, f, g;
        scanf("%lld/%lld/%lld %lld:%lld:%lld %lld", &a, &b, &c, &d, &e, &f, &g);
        v.push_back({cal(a,b,c,d,e,f),g});
    }
    for (int i=0;i<N;i++){
        //cout << v[i].date << " " << v[i].x << "\n";
        ld a=max(pow(0.5,(double)(v[N-1].date-v[i].date)/(365*24*3600)),pow(0.9,N-1-i));
        x+=a*v[i].x;
        y+=a;
    }
    cout << fixed;
    cout.precision(0);
    cout << x/y;
    return 0;
} 