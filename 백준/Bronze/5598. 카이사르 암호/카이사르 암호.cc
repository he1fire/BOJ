#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    for (int i=0;i<S.size();i++){
        char x=S[i];
        x-=3;
        if (x<'A')
            x+=26;
        cout << x;
    }
    return 0;
}