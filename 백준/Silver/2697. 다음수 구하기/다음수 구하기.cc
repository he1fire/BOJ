#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char M[81]={0, };
        int A=0, B=-1, C=0;
        cin >> M;
        for (int j=0;M[j]!=0;j++)
        A=j;
        for (int k=A;k>=1;k--)
            {
            if (M[k]>M[k-1])
                {
                B=k-1;
                break;
                }
            }
        if (B==-1)
        cout << "BIGGEST" << "\n";
        else
            {
            sort (M+B+1, M+A+1);
            for (int j=B+1;M[j]!=0;j++)
                {
                if (M[B]<M[j])
                    {
                    C=j;
                    break;
                    }
                }
            swap (M[B], M[C]);
            sort (M+B+1, M+A+1);
            for (int j=0;M[j]!=0;j++)
            cout << M[j];
            cout << "\n";
            }
        }
    return 0;
    }