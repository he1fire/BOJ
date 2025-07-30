#include <iostream>
#include <string>
using namespace std;
int main () {
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++)
    cout << (char)(N[i]-32);
    return 0;
    }