#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        double x;
        cin >> x;
        printf("$%.2f\n", x*8/10);
        }
    return 0;
    }