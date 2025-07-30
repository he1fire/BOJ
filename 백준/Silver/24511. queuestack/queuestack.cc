#include <bits/stdc++.h>
#define ll long long
using namespace std;
deque<ll> dq;
vector<ll> arr;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (!arr[i])
            dq.push_back(a);
    }
    cin >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        dq.push_front(a);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    return 0;
}