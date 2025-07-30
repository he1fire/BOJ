#include <iostream>
#include <string>
using namespace std;
int main () {
    string x;
    int joi=0, ioi=0;
    cin >> x;
    for (int i=2;i<x.size();i++){
        if (x[i]=='I' && x[i-1]=='O'){
            if (x[i-2]=='I')
                ioi++;
            else if (x[i-2]=='J')
                joi++;
            }
        }
    cout << joi << "\n" << ioi;
    return 0;
    }