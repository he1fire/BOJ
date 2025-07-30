#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        string T;
        cin >> T;
        int cnt=1, ans=0;
        reverse(T.begin(),T.end());
        for (int j=0;j<T.size();j++){
            if (T[j]=='1')
                ans+=cnt;
            cnt*=2;
        }
        cout << ans << "\n";
    }
    return 0;
}