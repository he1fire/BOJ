#include <iostream>
#include <algorithm>
using namespace std;
int arr[1005];
int main () {
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b, x;
        cin >> a >> b >> x;
        for (int j=a;j<=b;j++)
            arr[j]+=x;
    }
    for (int i=0;i<1001;i++)
        ans=max(ans,arr[i]);
    cout << ans;
    return 0;
}