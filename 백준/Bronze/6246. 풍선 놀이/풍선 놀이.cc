#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N, Q, y=0;
    cin >> N >> Q;
    vector<int> x(N, 0);
    for (int i=1;i<=Q;i++)
        {
        int A, B;
        cin >> A >> B;
        for (int j=0;A-1+B*j<N;j++)
        x[A-1+B*j]=1;
        }
    for (int i=0;i<N;i++)
    if (x[i]==0)
    y++;
    cout << y;
    return 0;
    }