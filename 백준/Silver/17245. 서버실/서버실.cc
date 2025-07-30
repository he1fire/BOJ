#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector<ll> v;
ll N, cnt=0, lo=0, hi=10000001;
bool f (int x){
    ll chk=0;
    for (int i=0;i<N*N;i++){
        if (v[i]<=x)
            chk+=v[i];
        else
            chk+=x;
    }
    if (chk*2>=cnt)
	   return 1;
    else
	   return 0;
}
int main () {
    cin >> N;
    for (int i=0;i<N*N;i++){
        int a;
        cin >> a;
        v.push_back(a);
        cnt+=a;
    }
    for (int i=0;i<50;i++){
        ll mid=(lo+hi)/2;
        if (f(mid))
            hi=mid;
        else
            lo=mid;
    }
    cout << hi;
    return 0;
}