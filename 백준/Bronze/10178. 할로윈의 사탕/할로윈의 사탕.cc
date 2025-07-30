#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        cout << "You get " << A/B << " piece(s) and your dad gets " << A%B << " piece(s).\n";
        }
    return 0;
    }