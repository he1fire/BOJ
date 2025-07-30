#include <iostream>
using namespace std;
int main () {
    int N, ans=1;
    cin >> N;
    N--;
    for (int i=0;1;i++){
        N-=i*6;
        if (N<=0)
        break;
        else
        ans++;
        }
    cout << ans;
    return 0;
    }