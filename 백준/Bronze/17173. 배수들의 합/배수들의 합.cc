#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M, arr[1001]={0}, cnt=0;;
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a;
        cin >> a;
        for (int j=1;j*a<=1000;j++)
            arr[j*a]=1;
    }
    for (int i=0;i<=N;i++){
        if (arr[i]==1)
            cnt+=i;
    }
    cout << cnt;
    return 0;
}