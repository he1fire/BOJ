#include <iostream>
#include <string>
using namespace std;
int main () {
    string N, M;
    cin >> N >> M;
    for (int i=0;i<N.size();i++)
    N[i]=='1' && M[i]=='1' ? cout << "1" : cout << "0";
    cout << "\n";
    for (int i=0;i<N.size();i++)
    N[i]=='1' || M[i]=='1' ? cout << "1" : cout << "0";
    cout << "\n";
    for (int i=0;i<N.size();i++)
    N[i]!=M[i] ? cout << "1" : cout << "0";
    cout << "\n";
    for (int i=0;i<N.size();i++)
    N[i]=='0' ? cout << "1" : cout << "0";
    cout << "\n";
    for (int i=0;i<N.size();i++)
    M[i]=='0' ? cout << "1" : cout << "0";
    return 0;
    }