#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B, C;
        cin >> A >> B >> C;
        if (B-C>A)
        cout << "advertise\n";
        else if (B-C<A)
        cout << "do not advertise\n";
        else
        cout << "does not matter\n";
        }
    return 0;
    }