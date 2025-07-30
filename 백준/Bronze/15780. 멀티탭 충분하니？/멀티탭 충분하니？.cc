#include <iostream>
using namespace std;
int main () {
    int N, M, cnt=0;
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a;
        cin >> a;
        cnt+=(a+1)/2;
    }
    cnt>=N ? cout << "YES" : cout << "NO";
    return 0;
}