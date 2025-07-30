#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N;
priority_queue<double> pq;
stack<double> s;
int main(){
    cin >> N;
    while (N--){
        double a;
        cin >> a;
        pq.push(a);
        while (pq.size()>7)
            pq.pop();
    }
    while (!pq.empty()){
        s.push(pq.top());
        pq.pop();
    }
    while (!s.empty()){
        printf("%.3f\n",s.top());
        s.pop();
    }
    return 0;
}