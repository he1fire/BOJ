#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> x;
    int N;
    cin >> N;
    while (N--){
        int a;
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(),x.end());
    for (int i=0;i<x.size();i++)
        cout << x[i] << " ";
    return 0;
}