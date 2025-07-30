#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int x;
        cin >> x;
        cout << ((x/2)+1)*((x/2)+1) << "\n";
        }
    return 0;
    }