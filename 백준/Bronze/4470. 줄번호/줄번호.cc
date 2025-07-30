#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    string s;
    cin >> N;
    getline(cin,s);
    for (int i=1;i<=N;i++)
        {
        string x;
        getline(cin,x);
        cout << i << ". " << x << "\n";
        }
    return 0;
    }