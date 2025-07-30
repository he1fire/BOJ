#include <iostream>
using namespace std;
int main () {
    int N, x=0, a=0, b=0;
    cin >> N;
    for (int i=1;1;i++){
        N-=i;
        if (N<=0){
            x=i+1;
            break;
            }
        }
    a=-N+1;
    b=x-a;
    if (x%2==0)
    cout << a << "/" << b;
    else
    cout << b << "/" << a;
    return 0;
    }