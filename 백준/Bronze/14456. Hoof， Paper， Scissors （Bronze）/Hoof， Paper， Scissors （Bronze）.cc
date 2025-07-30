#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, cnt1=0, cnt2=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        if ((a==1 && b==2) || (a==2 && b==3) || (a==3 && b==1))
            cnt1++;
        if ((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))
            cnt2++;
    }
    cout << max(cnt1,cnt2);
    return 0;
}