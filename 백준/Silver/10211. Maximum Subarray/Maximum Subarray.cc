#include <iostream>
using namespace std;
int main () {
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N, max=0, sum=0, check=-1001;
        cin >> N;
        for (int j=0;j<N;j++){
            int x;
            cin >> x;
            sum+=x;
            if (x>check)
            check=x;
            if (sum>max)
            max=sum;
            if (sum<0)
            sum=0;
            }
        check>0 ? cout << max << "\n" : cout << check << "\n";
        }
    return 0;
    }