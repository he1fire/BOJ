#include <iostream>
using namespace std;
int main () {
    int N, M, x, y;
    cin >> N >> M >> x >> y;
    for(int a=0;a<N;a++){
        for(int b=0;b<x;b++){
            int cnt=a%2;
            for(int c=0;c<M;c++){
                for(int d=0;d<y;d++){
                    if (cnt%2==0)
                    cout << "X";
                    else
                    cout << ".";
                }
                cnt++;
            }
            cout << "\n";
        }
    }
    return 0;
}