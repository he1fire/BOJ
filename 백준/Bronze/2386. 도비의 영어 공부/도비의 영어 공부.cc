#include <iostream>
#include <string>
using namespace std;
int main () {
    while (1)
        {
        int cnt=0;
        char N;
        string x;
        cin >> N;
        if (N=='#')
        break;
        getline(cin, x);
        for (int i=0;i<x.size();i++)
            {
            if (x[i]==N || x[i]==N-32)
            cnt++;
            }
        cout << N << " " << cnt << "\n";
        }
    return 0;
    }