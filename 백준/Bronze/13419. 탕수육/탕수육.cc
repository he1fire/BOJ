#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        string M;
        cin >> M;
        if (M.size()%2==1)
        M+=M;
        for (int j=0;2*j<M.size();j++)
        cout << M[2*j];
        cout << "\n";
        for (int j=0;2*j+1<M.size();j++)
        cout << M[2*j+1];
        cout << "\n";
        }
    return 0;
    }