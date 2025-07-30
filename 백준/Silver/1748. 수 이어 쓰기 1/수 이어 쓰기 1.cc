#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, x=0, j=9;
    cin >> N;
    for (int i=100000000;i>0;i/=10)
        {
	       	if (N>=i)
            {
            x+=(N-i+1)*j;
            N-=(N-i+1);
            }
        j--;
        }
    cout << x;
    return 0;
    }