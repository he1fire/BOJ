#include <iostream>
using namespace std;
int arr[10005];
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    for (int i=0;i<=10000;i++){
        while (arr[i]){
            cout << i << "\n";
            arr[i]--;
        }
    }
    return 0;
}