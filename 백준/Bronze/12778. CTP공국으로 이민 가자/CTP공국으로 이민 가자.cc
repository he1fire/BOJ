#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N;
        char M;
        cin >> N >> M;
        if (M=='C'){
            for (int j=0;j<N;j++){
                char a;
                cin >> a;
                cout << a-64 << " ";
            }
        }
        else{
            for (int j=0;j<N;j++){
                int a;
                cin >> a;
                cout << char(a+64) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}