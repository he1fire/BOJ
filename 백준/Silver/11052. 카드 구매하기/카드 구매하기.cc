#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> x(1,0), y(1,0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        x.push_back(a);
    }
    for (int i=1;i<=N;i++){
        int cnt=0;
        for (int j=1;j<=i/2;j++)
            cnt=max(cnt,y[j]+y[i-j]);
        cnt=max(cnt,x[i]);
        y.push_back(cnt);
    }
    cout << y[N];
    return 0;
}