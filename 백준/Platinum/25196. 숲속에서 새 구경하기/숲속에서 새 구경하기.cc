#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll v, s, e;
    ABC() {}
    ABC(ll v, ll s, ll e): v(v), s(s), e(e) {}
};

ABC A, B, C;
ll mx, i=0;
ll gcd(ll a, ll b){
    return a ? gcd(b%a,a) : b;
}
ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}
void sort_ABC(){
    if (A.v<B.v)
        swap(A,B);
    if (A.v<C.v)
        swap(A,C);
    if (B.v<C.v)
        swap(B,C);
}
ll f(ll x){
    if (A.s<=x%A.v && x%A.v<=A.e && B.s<=x%B.v && x%B.v<=B.e && C.s<=x%C.v && x%C.v<=C.e)
        return 1;
    return 0;
}
int main(){
    cin >> A.v >> A.s >> A.e >> B.v >> B.s >> B.e >> C.v >> C.s >> C.e;
    sort_ABC();
    mx=lcm(A.v,lcm(B.v,C.v));
    while (i<mx){
        ll chk=0;
        if (f(i)){
            cout << i;
            return 0;
        }
        if (!(A.s<=i%A.v && i%A.v<=A.e)){
            chk=i/A.v;
            if (i<chk*A.v+A.s)
                i=chk*A.v+A.s;
            else
                i=(chk+1)*A.v+A.s;
            continue;
        }
        if (!(B.s<=i%B.v && i%B.v<=B.e)){
            chk=i/B.v;
            if (i<chk*B.v+B.s)
                i=chk*B.v+B.s;
            else
                i=(chk+1)*B.v+B.s;
            continue;
        }
        if (!(C.s<=i%C.v && i%C.v<=C.e)){
            chk=i/C.v;
            if (i<chk*C.v+C.s)
                i=chk*C.v+C.s;
            else
                i=(chk+1)*C.v+C.s;
            continue;
        }
    }
    cout << "-1";
    return 0;
}