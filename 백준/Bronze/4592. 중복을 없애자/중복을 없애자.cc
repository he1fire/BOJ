#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    while (1){
        int N, before=0;
        cin >> N;
        if (N==0)
            break;
        for (int i=0;i<N;i++){
            int a;
            cin >> a;
            if (i!=0 && a==before);
            else
                cout << a << " ";
            before=a;
            }
        cout << "$\n";
    }
    return 0;
}