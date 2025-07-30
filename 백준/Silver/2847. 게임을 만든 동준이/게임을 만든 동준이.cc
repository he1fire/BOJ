#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[105];
int main() {
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    while (1){
        int cnt=0;
        for (int i=0;i<N-1;i++){
            if (arr[i]>=arr[i+1]){
                cnt++;
                ans+=arr[i]-arr[i+1]+1;
                arr[i]=arr[i+1]-1;
            }
        }
        if (!cnt)
            break;
    }
    cout << ans;
    return 0;
}