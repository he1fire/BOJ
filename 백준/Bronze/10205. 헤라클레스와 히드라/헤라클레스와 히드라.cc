#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M;
        char A[101]={0, };
        cin >> M >> A;
        for (int j=0;A[j]!=0;j++)
            {
            if (A[j]=='c')
            M++;
            else
            M--;
            }
        cout << "Data Set " << i << ":\n" << M << "\n\n";
        }
    return 0;
    }