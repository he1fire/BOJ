#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int arr[305][3];
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=1;i<=N;i++){
        arr[i][0]=max(arr[i-1][1],arr[i-1][2]);
        arr[i][1]=arr[i-1][0]+v[i-1];
        arr[i][2]=arr[i-1][1]+v[i-1];
    }
    cout << max(arr[N][1],arr[N][2]);
    return 0;
}