#include <iostream>
#include <string>
using namespace std;
int main () {
    int R, C, Z;
    string arr[11];
    cin >> R >> C >> Z;
    for (int i=0;i<R;i++)
        cin >> arr[i];
    for (int i=0;i<R;i++){
        for (int j=0;j<Z;j++){
            for (int k=0;k<C;k++){
                for (int l=0;l<Z;l++)
                    cout << arr[i][k];
            }
            cout << "\n";
        }
    }
    return 0;
}