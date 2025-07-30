#include <iostream>
#include <queue>
using namespace std;
int main () {
    priority_queue<int> pq;
    int N, M, K, ans=0, cnt=0, chk=0;
    cin >> N >> M >> K;
    cnt=M*K;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        pq.push(a);
        chk+=a;
    }
    if (cnt>chk){
        cout << "STRESS";
        return 0;
    }
    while (cnt>0){
        int x=pq.top();
        cnt-=x;
        ans++;
        pq.pop();
    }
    cout << ans;
    return 0;
}