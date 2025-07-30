#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
    double A, B, C, cnt=0;
    cin >> A >> B >> C;
    cnt=max(A*B/C,A/B*C);
    printf("%.f",floor(cnt));
	return 0;
}