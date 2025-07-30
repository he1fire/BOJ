#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, A[11]={0, }, a=0, b=0, c=0;
        cin >> M;
        for (int j=1;j<=M;j++)
            {
            cin >> A[j];
            a+=A[j];
            if (A[j]>b)
                {
                b=A[j];
                c=j;
                }
            }
        sort (A+1, A+M+1);
        if (A[M]==A[M-1])
        cout << "no winner\n";
        else if (a/(2*A[M])==0)
        cout << "majority winner " << c << "\n";
        else
        cout << "minority winner " << c << "\n";
        }
    return 0;
    }