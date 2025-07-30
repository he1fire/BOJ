#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (1){
        string x;
        int N=0;
        cin >> x;
        if (x=="0")
            break;
        for (int i=0;i<x.size();i++)
            N+=x[i]-48;
        while (N>9){
            int M=N, cnt=0;
            while (M){
                cnt+=M%10;
                M/=10;
            }
            N=cnt;
        }
        cout << N << "\n";
    }
    return 0;
}