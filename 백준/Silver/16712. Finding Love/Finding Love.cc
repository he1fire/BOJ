#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> v;
queue<ll> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        q.push(a);
    }
    for (int i=0;i<N-M+1;i++){
        ll a;
        cin >> a;
        while (v.size()<M){
            v.push_back(q.front());
            q.pop();
        }
        sort(v.begin(),v.end());
        v.erase(v.begin()+a-1);
    }
    for (auto i:v)
        cout << i << " ";
    return 0;
}