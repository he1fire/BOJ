#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char A[61]={0, };
        int j;
        cin >> A;
        for (j=0;A[j]!=0;j++);
        if (A[j-1]%2==0)
        cout << "even\n";
        else
        cout << "odd\n";
        }
    return 0;
    }