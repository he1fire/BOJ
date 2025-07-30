#include <iostream>
using namespace std;
int main () {
    int N, W, H;
    cin >> N >> W >> H;
    for (int i=1;i<=N;i++)
        {
        int M;
        cin >> M;
        if (W*W+H*H>=M*M)
        cout << "DA" << "\n";
        else
        cout << "NE" << "\n";
        }
    return 0;
    }