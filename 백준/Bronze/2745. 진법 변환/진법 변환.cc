#include <iostream>
#include <string>
using namespace std;
int main() {
    int N, M=1, cnt=0;
    string x;
    cin >> x >> N;
    for (int i=x.size()-1;i>=0;i--){
        if (x[i]>=65)
            cnt+=M*(x[i]-55);
        else
            cnt+=M*(x[i]-48);
        M*=N;
    }
    cout << cnt;
    return 0;
}