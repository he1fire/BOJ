#include <iostream>
using namespace std;
int main () {
    int N, A[4]={0, }, B[4]={0, }, C[4]={0, };
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int a, b, c;
        cin >> a >> b >> c;
        A[0]+=a;
        A[a]++;
        B[0]+=b;
        B[b]++;
        C[0]+=c;
        C[c]++;
        }
    if (A[0]>B[0] && A[0]>C[0])
    cout << "1 " << A[0];
    else if (B[0]>A[0] && B[0]>C[0])
    cout << "2 " << B[0];
    else if (C[0]>A[0] && C[0]>B[0])
    cout << "3 " << C[0];
    else if (A[0]==B[0] && A[0]>C[0])
        {
        if (A[3]>B[3])
        cout << "1 " << A[0];
        else if (A[3]<B[3])
        cout << "2 " << B[0];
        else 
        cout << "0 " << A[0];
        }
    else if (B[0]==C[0] && B[0]>A[0])
        {
        if (B[3]>C[3])
        cout << "2 " << B[0];
        else if (B[3]<C[3])
        cout << "3 " << C[0];
        else 
        cout << "0 " << B[0];
        }
    else if (A[0]==C[0] && A[0]>B[0])
        {
        if (A[3]>C[3])
        cout << "1 " << A[0];
        else if (A[3]<C[3])
        cout << "3 " << C[0];
        else 
        cout << "0 " << C[0];
        }
    else
        {
        if (A[3]>B[3] && A[3]>C[3])
        cout << "1 " << A[0];
        else if (B[3]>A[3] && B[3]>C[3])
        cout << "2 " << B[0];
        else if (C[3]>A[3] && C[3]>B[3])
        cout << "3 " << C[0];
        else
        cout << "0 " << A[0];
        }
    return 0;
    }