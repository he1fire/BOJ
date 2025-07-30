#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> v;
    int N, cnt=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int A;
        cin >> A;
        if (A)
            v.push_back(A);
        else
            v.pop_back();
        }
    for (int i=0;i<v.size();i++)
        cnt+=v[i];
    cout << cnt;
    return 0;
    }