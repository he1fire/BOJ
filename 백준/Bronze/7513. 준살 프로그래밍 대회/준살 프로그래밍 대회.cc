#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i=1;i<=N;i++){
        cout << "Scenario #" << i << ":\n";
        int M, T;
        string S[50];
        cin >> M;
        for (int j=0;j<M;j++)
            cin >> S[j];
        cin >> T;
        for (int j=0;j<T;j++){
            int a;
            cin >> a;
            for (int k=0;k<a;k++){
                int b;
                cin >> b;
                cout << S[b];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}