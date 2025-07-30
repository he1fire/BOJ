#include <iostream>
using namespace std;
int main () {
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N, M, cnt=0;
        cin >> N >> M;
        for (int j=N;j<=M;j++){
            int x=j;
            if (x==0)
                cnt++;
            while (x){
                if (x%10==0)
                    cnt++;
                x/=10;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}