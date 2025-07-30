#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char M[21]={0, };
        cin >> M;
        for (int j=0;M[j]!=0;j++)
            {
            if (M[j]<=90)
            cout << (char)(M[j]+32);
            else
            cout << (char)M[j];
            }
        cout << "\n";
        }
    return 0;
    }