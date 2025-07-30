#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, chk=1, cnt;
deque<ll> dq;
int main(){
    cin >> N >> K >> M;
    for (int i=1;i<=N;i++)
        dq.push_back(i);
    while (!dq.empty()){
        if (chk){
            for (int i=0;i<K-1;i++){
                ll x=dq.front();
                dq.pop_front();
                dq.push_back(x);
            }
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else{
            for (int i=0;i<K-1;i++){
                ll x=dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        cnt++;
        if (cnt==M){
            cnt=0;
            chk=(chk+1)%2;
        }
    }
    return 0;
}