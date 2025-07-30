#include <iostream>
using namespace std;
int main () {
    long long N, i=4052555153018976267;
    cin >> N;
    if (N==0){
        cout << "NO";
        return 0;
    }
    while (i>0 && N>0){
        if (N>=i)
            N-=i;
        i/=3;
    }
    if (N==0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}