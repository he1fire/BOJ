#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    cin.ignore(1);
    while (N--){
        string x;
        int cnt=0;
        getline(cin,x);
        cout << "god";
        for (int j=0;j<x.size();j++){
            if (x[j]==' ')
                cnt++;
            else if (cnt)
                cout << x[j];
        }
        cout << "\n";
    }
    return 0;
}