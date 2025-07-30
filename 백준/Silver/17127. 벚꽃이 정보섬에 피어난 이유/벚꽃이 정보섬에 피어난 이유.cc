#include <iostream>
#include <algorithm>
using namespace std;
int N, x[15], ans=0, cnt=1;
int main() {
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> x[i];
        cnt*=x[i];
    }
    ans=max({ans, (cnt/(x[0]*x[1]*x[2]))+x[0]+x[1]+x[2], (cnt/(x[0]*x[1]*x[N-1]))+x[0]+x[1]+x[N-1], (cnt/(x[0]*x[N-2]*x[N-1]))+x[0]+x[N-2]+x[N-1], (cnt/(x[N-3]*x[N-2]*x[N-1]))+x[N-3]+x[N-2]+x[N-1]});
    cout << ans;
    return 0;
}