#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    int N, M;
    cin >> N >> M;
    N-=N%100;
    while (N%M!=0)
        N++;
    printf("%02d",N%100);
    return 0;
    }