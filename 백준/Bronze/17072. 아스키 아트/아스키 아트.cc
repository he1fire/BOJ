#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            int r, g, b, cnt;
            cin >> r >> g >> b;
            cnt=2126*r+7152*g+722*b;
            if (cnt<510000)
                cout << "#";
            else if (cnt<1020000)
                cout << "o";
            else if (cnt<1530000)
                cout << "+";
            else if (cnt<2040000)
                cout << "-";
            else
                cout << ".";
        }
        cout << "\n";
    }
    return 0;
}