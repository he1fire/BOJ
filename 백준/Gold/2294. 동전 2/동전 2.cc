#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[100001];
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(&arr[0], &arr[100000], 987654321);
    int N, k, mi=987654321;
    cin >> N >> k;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        mi=min(mi,a);
        arr[a]=1;
    }
    for (int i=mi;i<=k;i++){
        for (int j=0;j<=i/2;j++)
            arr[i]=min(arr[i],arr[j]+arr[i-j]);
    }
    arr[k]!=987654321 ? cout << arr[k] : cout << "-1";
    return 0;
}