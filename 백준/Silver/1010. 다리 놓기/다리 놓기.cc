#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        long long ans=1;
        cin >> a >> b;
        for (int j=0;j<a;j++){
            ans*=(b-j);
            ans/=(j+1);
            }
        cout << ans << "\n";
        }
    return 0;
    }