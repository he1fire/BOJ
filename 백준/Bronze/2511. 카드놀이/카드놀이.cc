#include <iostream>
using namespace std;
int main () {
    int a[10], b[10], A=0, B=0;
    for (int i=0;i<=9;i++)
    cin >> a[i];
    for (int i=0;i<=9;i++)
    cin >> b[i];
    for (int j=0;j<=9;j++)
        {
        if (a[j]>b[j])
        A+=3;
        else if (a[j]<b[j])
        B+=3;
        else
            {
            A++;
            B++;
            }
        }
    if (A==10 && B==10)
    cout << A << " " << B << "\n" << "D";
    else if (A>B)
    cout << A << " " << B << "\n" << "A";
    else if (A<B)
    cout << A << " " << B << "\n" << "B";
    else
    for (int k=9;k>=0;k--)
        {
        if (a[k]>b[k])
            {
            cout << A << " " << B << "\n" << "A";
            break;
            }
        else if (a[k]<b[k])
            {
            cout << A << " " << B << "\n" << "B";
            break;
            }
        }
    return 0;
    }