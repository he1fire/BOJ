#include <iostream>
using namespace std;
int N, M, arr[100001], cnt;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        int a;
        cin >> a;
        cnt+=a;
        arr[i]=cnt;
    }
    cin >> M;
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        a--;
        cout << arr[b]-arr[a] << "\n";
    }
    return 0;
}