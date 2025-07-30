#include <iostream>
using namespace std;
int main () {
    int A=0, B=0;
    for (int i=3;i>=1;i--){
        int a;
        cin >> a;
        A+=a*i;
    }
    for (int i=3;i>=1;i--){
        int b;
        cin >> b;
        B+=b*i;
    }
    if (A==B)
        cout << "T";
    else
        A>B ? cout << "A" : cout << "B";
    return 0;
}