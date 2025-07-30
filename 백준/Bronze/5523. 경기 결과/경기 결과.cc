#include <iostream>
using namespace std;
int main () {
    int N, x=0, y=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        if (A>B)
        x++;        
        else if (B>A)
        y++;
        }
    cout << x << " " << y;
    return 0;
    }