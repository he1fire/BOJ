#include <iostream>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, x=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        string A;
        int B;
        cin >> A;
        if (A[0]=='a' && A[1]=='l')
        x=(1<<20)-1;
        else if (A[0]=='e')
        x=0;
        else
            {
            cin >> B;
            if (A[0]=='a')
            x|=(1<<(B-1));
            else if (A[0]=='r')
            x&=~(1<<(B-1));
            else if (A[0]=='c')
            x&(1<<(B-1)) ? cout << "1\n" : cout << "0\n";
            else if (A[0]=='t')
            x^=(1<<(B-1));
            }
        }
    return 0;
    }