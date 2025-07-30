#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, money, jusik;
vector<ll> v;
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(-1);
    money=M;
    for (int i=0;i<N;i++){
        if (v[i+1]<v[i]){
            money+=jusik*v[i];
            jusik=0;
        }
        else if (v[i+1]>v[i]){
            jusik+=money/v[i];
            money%=v[i];
        }
    }
    cout << money;
    return 0;
}