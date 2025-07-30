#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, chk=0;
vector<ll> v;
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b;
        if (a==1){
            cin >> c;
            v[(b-1+chk)%N]+=c;
        }
        else if (a==2)
            chk-=b;
        else
            chk+=b;

        if (chk<0)
            chk+=N;
        if (chk>=N)
            chk-=N;
    }
    for (int i=chk;i<N;i++)
        cout << v[i] << " ";
    for (int i=0;i<chk;i++)
        cout << v[i] << " ";
    return 0;
}