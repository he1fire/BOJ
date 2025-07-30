#include <iostream>
using namespace std;
int f(int x, int y){
    return x ? f(y%x,x) : y;
    }
int g(int x, int y){
    return x/f(x,y)*y;
    }
int main() {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        cout << g(a,b) << " " << f(a,b) << "\n";
        }
    return 0;
    }