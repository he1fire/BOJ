#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<string> v;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++){
        string M(N.begin()+i,N.end());
        v.push_back(M);
        }
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++)
        cout << v[i] << "\n";
    return 0;
    }