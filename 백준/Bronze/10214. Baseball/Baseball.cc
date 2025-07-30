#include <iostream>
using namespace std;
int main () {
    int N, Y=0, K=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        for (int j=1;j<=9;j++)
            {
            int A, B;
            cin >> A >> B;
            Y+=A;
            K+=B;
            }
        if (Y>K)
        cout << "Yonsei\n";
        else if (K>Y)
        cout << "Korea\n";
        else
        cout << "Draw\n";
        Y=0;
        K=0;
        }
    return 0;
    }