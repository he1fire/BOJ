#include <iostream>
#include <queue>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int> pq;
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        pq.push(a);
    }
    for (int i=0;i<N;i++){
        cout << pq.top() << "\n";
        pq.pop();
    }
    return 0;
}