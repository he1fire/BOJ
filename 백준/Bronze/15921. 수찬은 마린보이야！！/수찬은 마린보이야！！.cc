#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    double a=0, b=0;
    cin >> N;
    if (N==0){
        cout << "divide by zero";
        return 0;
    }
    for (int i=0;i<N;i++){
        double M;
        cin >> M;
        a+=M;
        b+=M/N;
    }
    printf("%.2lf",(a/N)/b);
    return 0;
}
