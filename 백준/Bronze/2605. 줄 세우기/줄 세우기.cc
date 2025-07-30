#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v;
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        v.push_back(i+1);
        int a;
        cin >> a;
        for (int j=i;j>i-a;j--)
        swap(v[j],v[j-1]);
        }
    for (int i=0;i<N;i++)
    cout << v[i] << " ";
    return 0;
    }