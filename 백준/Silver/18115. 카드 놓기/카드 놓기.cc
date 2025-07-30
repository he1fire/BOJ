#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N;
vector<ll> arr;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    reverse(arr.begin(), arr.end());
    for (int i=1;i<=N;i++){
        if (arr[i-1]==1)
            dq.push_front(i);
        if (arr[i-1]==2){
            ll a=dq.front();
            dq.pop_front();
            dq.push_front(i);
            dq.push_front(a);
        }
        if (arr[i-1]==3)
            dq.push_back(i);
    }
    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}