#include <iostream>
using namespace std;
int main () {
    char N[1001], M[1001];
    int n=0, m=0;
    cin >> N >> M;
    for (int i=0;N[i]!='h';i++)
        {
        if (N[i]=='a')
        n++;
        }
    for (int j=0;M[j]!='h';j++)
        {
        if (M[j]=='a')
        m++;
        }
    if (n>=m)
    cout << "go";
    else
    cout << "no";
    return 0;
    }