#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct AB{
    ll st, ed;
    bool operator<(AB& tmp){
        if (st!=tmp.st)
            return st<tmp.st;
        return ed<tmp.ed;
    }
};
ll N, now;
vector<AB> v;
string S[15]={"rat", "cow", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "chicken", "dog", "pig", "lion", "giraffe", "cat"};
void g(ll x){
    cout << (x/60<10 ? "0" : "") << x/60 << ":" << (x%60<10 ? "0" : "") << x%60;
}
void f(AB x){
    for (int i=0;i<15;i++){
        if ((i+1)*96<=now || now+x.ed<i*96)
            continue;
        cout << S[i] << " ";
    }
    cout << "\n";
    g(now);
    cout << " ";
    g(now+x.ed);
    cout << "\n";
    now+=x.ed;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a*60+b,c});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        if (now<v[i].st)
            now=v[i].st;
        if (now+v[i].ed>=24*60){
            cout << N-i;
            break;
        }
        else
            f(v[i]);
    }
    return 0;
}