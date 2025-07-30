#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int N, M, cnt=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        x.push_back(a);
        for (int j=0;j<i;j++){
            if (x[i]+x[j]<=M)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}