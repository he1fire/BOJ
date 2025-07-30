#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> v(3,0);
    v[0]=1;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++){
        if (N[i]=='A')
            swap(v[0],v[1]);
        else if (N[i]=='B')
            swap(v[1],v[2]);
        else
            swap(v[0],v[2]);
        }
    if (v[0]==1)
        cout << "1";
    if (v[1]==1)
        cout << "2";
    if (v[2]==1)
        cout << "3";
    return 0;
    }