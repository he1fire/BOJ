#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, x;
vector<ll> v;
int main(){
    cin >> N >> M;
    x=N;
    do{
        v.push_back(x);
        x=(x*N)%M;
    }while (find(v.begin(),v.end(),x)==v.end());
    cout << v.end()-find(v.begin(),v.end(),x);
    return 0;
}