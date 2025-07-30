#include <bits/stdc++.h>
#define ll long long
using namespace std;
deque<int> dq;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        dq.push_back(i);
    for (int i=0;dq.size()>1;i++){
        if (i%2==0)
            dq.pop_front();
        else{
            int a=dq.front();
            dq.pop_front();
            dq.push_back(a);
        }
    }
    cout << dq.front();
    return 0;
}