#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, M, cnt=0, v[3][7]={0, };
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int x, y;
        cin >> x >> y;
        v[x][y-1]++;
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<6;j++){
            if (v[i][j]){
                cnt+=v[i][j]/M;
                if(v[i][j]%M)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}