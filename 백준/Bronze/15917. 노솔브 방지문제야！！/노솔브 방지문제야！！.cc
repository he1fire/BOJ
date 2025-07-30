#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        (a&(-a))==a ? cout << "1\n" : cout << "0\n";
    }
    return 0;
}