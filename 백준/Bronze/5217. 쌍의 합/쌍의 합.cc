#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    while (N--){
        int x, cnt=0;
        cin >> x;
        cout << "Pairs for " << x << ": ";
        for (int i=1;i<=x/2;i++){
            for (int j=x-1;j>x/2;j--){
                if (x==i+j){
                    if (cnt)
                        cout << ", " ;
                    cout << i << " " << j;
                    cnt++;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}