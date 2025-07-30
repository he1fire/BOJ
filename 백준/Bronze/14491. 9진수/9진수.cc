#include <iostream>
using namespace std;
void f(int x){
    if (x){
        f(x/9);
        cout << x%9;
    }
}
int main () {
    int N;
    cin >> N;
    f(N);
    return 0;
}